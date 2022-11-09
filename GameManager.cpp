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

    // �摜�ǂݍ��݊֐�
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
// ������
//---------------------------------------------------------------------
        case INIT:
            // �������֐�
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
            back.Scroll();
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
            // �G
            behavioralPattern.Update(enemy1, enemy2, enemy3, enemy4, boss);
            // �V���b�g
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
            // �}�b�v�֘A
            map.Scroll();
            // ���̑�
            baseEdurance.Edurance(enemy1, enemy2, enemy3, enemy4);

            // �`��֐�
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