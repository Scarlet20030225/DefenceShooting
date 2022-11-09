#include"GameManager.h"
#include"GameStatus.h"
#include"Time.h"
#include"Map.h"

Time time;
UI ui;
Map map;

void GameInit(Player& player, Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4, BehavioralPattern& behavioralPattern, Boss& boss, PlayerShot* playerShot, BossShot* bossShot, Shot& shot, Back& back, BaseEdurance& baseEdurance)
{
    ChangeWindowMode(TRUE);
    DxLib_Init();
    SetDrawScreen(DX_SCREEN_BACK);
    SetGraphMode(WINDOW_WIDTH, WINDOW_HEIGHT, COLOR_DEPTH);

    // 画像読み込み関数
    player.Load();
    behavioralPattern.Load(enemy1, enemy2, enemy3, enemy4, boss);
    for (int i = 0; i < SHOT_NUM; i++)
    {
        playerShot[i].Load();
        bossShot[i].Load();
    }
    back.LoadTitle();
    ui.Load();
    map.Load();
    baseEdurance.Load();
}

void Loop(Player& player, Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4, BehavioralPattern& behavioralPattern, Boss& boss, PlayerShot* playerShot, BossShot* bossShot, Shot& shot, Back& back, BaseEdurance& baseEdurance)
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
            behavioralPattern.Init(enemy1, enemy2, enemy3, enemy4, boss);
            for (int i = 0; i < SHOT_NUM; i++)
            {
                playerShot[i].Init();
                bossShot[i].Init();
            }
            back.InitTitle();
            time.Init();
            map.Init();
            ui.Init();
            baseEdurance.Init();
            
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
            back.Scroll();
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
            // 敵
            behavioralPattern.Update(enemy1, enemy2, enemy3, enemy4, boss);
            // ショット
            for (int i = 0; i < SHOT_NUM; i++)
            {
                playerShot[i].Update(boss, enemy1, enemy2, enemy3, enemy4);
                if (boss.x == 1200)
                {
                    bossShot[i].Update(player);
                }
            }
            shot.PlayerBurst(player, playerShot);
            shot.BossBurst(boss, bossShot);
            shot.CheckHit(player, enemy1, enemy2, enemy3, enemy4);
            // マップ関連
            map.Scroll();
            // その他
            baseEdurance.Edurance(enemy1, enemy2, enemy3, enemy4);

            // 描画関数
            map.Draw();
            for (int i = 0; i < SHOT_NUM; i++)
            {
                playerShot[i].Draw();
                if (boss.x == 1200)
                {
                    bossShot[i].Draw();
                }
            }
            player.Draw(ui);
            ui.Draw();
            baseEdurance.Draw();
            behavioralPattern.Draw(enemy1, enemy2, enemy3, enemy4, boss);

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