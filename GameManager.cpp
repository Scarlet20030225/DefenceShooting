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

    // �摜�ǂݍ��݊֐�
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
// ������
//---------------------------------------------------------------------
        case INIT:
            // �������֐�
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
            
            // �^�C�g����ʂ֔��
            gameStatus = TITLE;
            break;

//---------------------------------------------------------------------
// �^�C�g�����
//---------------------------------------------------------------------
        case TITLE:
            // �`�揉����
            ClearDrawScreen();

            back.DrawTitle();
            // ENTER�L�[�������ꂽ��                  
            if (CheckHitKey(KEY_INPUT_RETURN))
            {
                // �v���C��ʂ֔��
                gameStatus = PLAY;
            }
            // END�L�[�������ꂽ��
            if (CheckHitKey(KEY_INPUT_END))
            {
                // �Q�[�����I������
                DxLib::DxLib_End();
            }

            // �`��̊m��
            ScreenFlip();
            break;

//---------------------------------------------------------------------
// �v���C���
//---------------------------------------------------------------------
        case PLAY:
            // �`�揉����
            ClearDrawScreen();

            time.Measurement();
            // Update�֐�
            // �v���C���[
            player.Move(1.0f / 120.0f); 
            player.Mode();
            player.HitWall();
            // �G���G1
            enemy1.Move();
            enemy1.Hit();
            enemy1.Damaged();
            // �G���G2
            enemy2.Move();
            enemy2.Hit();
            enemy2.Damaged();
            // �G���G3
            enemy3.Move();
            enemy3.Hit();
            enemy3.Damaged();
            // �G���G4
            enemy4.Move();
            enemy4.Hit();
            enemy4.Damaged();
            // �{�X
            boss.Move();
            boss.Hit();
            boss.Damaged();
            // �V���b�g
            for (int i = 0; i < SHOT_NUM; i++)
            {
                playerShot[i].Update(boss, enemy1, enemy2, enemy3, enemy4);
                bossShot[i].Update(player);
            }
            shot.PlayerBurst(player, playerShot);
            shot.BossBurst(boss, bossShot);
            // �}�b�v
            map.Scroll();

            // �`��֐�
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

            // �`��̊m��
            ScreenFlip();

            time.FrameProcess();
            // ESC�L�[�������ꂽ��
            if (CheckHitKey(KEY_INPUT_ESCAPE))
            {
                // �������֔��
                gameStatus = INIT;
            }
            break;

//---------------------------------------------------------------------
// ���U���g���
//---------------------------------------------------------------------
        case RESULT:
            // �`�揉����
            ClearDrawScreen();

            // ESC�L�[�������ꂽ��
            if (CheckHitKey(KEY_INPUT_ESCAPE))
            {
                // �������֔��
                gameStatus = INIT;
            }

            // �`��̊m��
            ScreenFlip();
            break;

        default:
            break;
        }
    }
}