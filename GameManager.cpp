#include"GameManager.h"
#include"GameStatus.h"
#include"Time.h"
#include"Map.h"

Time time;
UI ui;
Map map;

void GameInit(Player& player, Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4, Boss& boss, PlayerShot* playerShot, BossShot* bossShot, Shot& shot, Back& back)
{
    ChangeWindowMode(TRUE);
    DxLib_Init();
    SetDrawScreen(DX_SCREEN_BACK);
    SetGraphMode(WINDOW_WIDTH, WINDOW_HEIGHT, COLOR_DEPTH);

    // 画像読み込み関数
    player.Load();
    enemy1.Load();
    enemy2.Load();
    enemy3.Load();
    enemy4.Load();
    boss.Load();
    for (int i = 0; i < SHOT_NUM; i++)
    {
        playerShot[i].Load();
        bossShot[i].Load();
    }
    back.LoadTitle();
    ui.Load();
    map.Load();
}

void Loop(Player& player, Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4, Boss& boss, PlayerShot* playerShot, BossShot* bossShot, Shot& shot, Back& back)
{
    while (ProcessMessage() == 0)
    {
        switch (gameStatus)
        {
//---------------------------------------------------------------------
// 初期化
//---------------------------------------------------------------------
        case INIT:
            // 初期化関数
            player.Init();
            enemy1.Init();
            enemy2.Init();
            enemy3.Init();
            enemy4.Init();
            boss.Init();
            for (int i = 0; i < SHOT_NUM; i++)
            {
                playerShot[i].Init();
                bossShot[i].Init();
            }
            back.InitTitle();
            time.Init();
            map.Init();
            ui.Init();
            
            // タイトル画面へ飛ぶ
            gameStatus = TITLE;
            break;

//---------------------------------------------------------------------
// タイトル画面
//---------------------------------------------------------------------
        case TITLE:
            // 描画初期化
            ClearDrawScreen();

            back.DrawTitle();
            // ENTERキーが押されたら                  
            if (CheckHitKey(KEY_INPUT_RETURN))
            {
                // プレイ画面へ飛ぶ
                gameStatus = PLAY;
            }
            // ENDキーが押されたら
            if (CheckHitKey(KEY_INPUT_END))
            {
                // ゲームを終了する
                DxLib::DxLib_End();
            }

            // 描画の確定
            ScreenFlip();
            break;

//---------------------------------------------------------------------
// プレイ画面
//---------------------------------------------------------------------
        case PLAY:
            // 描画初期化
            ClearDrawScreen();

            time.Measurement();
            // Update関数
            // プレイヤー
            player.Move(1.0f / 120.0f); 
            player.Mode();
            player.HitWall();
            // 雑魚敵1
            enemy1.Move();
            enemy1.Hit();
            enemy1.Damaged();
            // 雑魚敵2
            enemy2.Move();
            enemy2.Hit();
            enemy2.Damaged();
            // 雑魚敵3
            enemy3.Move();
            enemy3.Hit();
            enemy3.Damaged();
            // 雑魚敵4
            enemy4.Move();
            enemy4.Hit();
            enemy4.Damaged();
            // ボス
            boss.Move();
            boss.Hit();
            boss.Damaged();
            // ショット
            for (int i = 0; i < SHOT_NUM; i++)
            {
                playerShot[i].Update(boss, enemy1, enemy2, enemy3, enemy4);
                bossShot[i].Update(player);
            }
            shot.PlayerBurst(player, playerShot);
            shot.BossBurst(boss, bossShot);
            // マップ
            map.Scroll();

            // 描画関数
            map.Draw();
            boss.Draw();
            enemy1.Draw();
            enemy2.Draw();
            enemy3.Draw();
            enemy4.Draw();
            for (int i = 0; i < SHOT_NUM; i++)
            {
                playerShot[i].Draw();
                bossShot[i].Draw();
            }
            player.Draw(ui);
            ui.Draw();

            // 描画の確定
            ScreenFlip();

            time.FrameProcess();
            // ESCキーが押されたら
            if (CheckHitKey(KEY_INPUT_ESCAPE))
            {
                // 初期化へ飛ぶ
                gameStatus = INIT;
            }
            break;

//---------------------------------------------------------------------
// リザルト画面
//---------------------------------------------------------------------
        case RESULT:
            // 描画初期化
            ClearDrawScreen();

            // ESCキーが押されたら
            if (CheckHitKey(KEY_INPUT_ESCAPE))
            {
                // 初期化へ飛ぶ
                gameStatus = INIT;
            }

            // 描画の確定
            ScreenFlip();
            break;

        default:
            break;
        }
    }
}