#include"DxLib.h"
#include"Shot.h"

void Shot::PlayerBurst(Player& player, PlayerShot* playerShot)
{
	if (CheckHitKey(KEY_INPUT_SPACE))
	{
		if (player.shotInterval == 0)	// ���ˊԊu�̃C���^�[�o����0�̎�
		{
			for (int i = 0; i < SHOT_NUM; i++)
			{
				if (playerShot[i].visibleFlag == false)	// �e�̑��݂������t���O��false�ł���ꍇ
				{
					if (player.graph == player.graphMode1)	// �v���C���[�̉摜�����[�h1�ł���ꍇ
					{
						playerShot[i].graph = playerShot[i].rapidBullet;
						player.shotInterval = SHOT_INTERVAL1;
					}
					if (player.graph == player.graphMode2)	// �v���C���[�̉摜�����[�h2�ł���ꍇ
					{
						playerShot[i].graph = playerShot[i].penetrateBullet;
						player.shotInterval = SHOT_INTERVAL2;
					}
					if (player.graph == player.graphMode3)	// �v���C���[�̉摜�����[�h3�ł���ꍇ
					{
						playerShot[i].graph = playerShot[i].missileBullet;
						player.shotInterval = SHOT_INTERVAL3;
					}
					// �e���o��������W
					playerShot[i].x        = static_cast<float>(98 - 32) / 2 + player.x;
					playerShot[i].circle.x = static_cast<float>(98 - 20) / 2 + player.x + playerShot[i].circle.r;
					playerShot[i].y        = static_cast<float>(64 - 32) / 2 + player.y;
					playerShot[i].circle.y = static_cast<float>(64 - 20) / 2 + player.y + playerShot[i].circle.r;

					playerShot[i].visibleFlag = true;

					break;
				}
			}
		}
	}

	if (player.shotInterval > 0)
	{
		--player.shotInterval;
	}
}

void Shot::BossBurst(Boss& boss, BossShot* bossShot)
{
	bossShot->shotCounter++;
	if (bossShot->shotCounter == 60)
	{
		for (int i = 0; i < SHOT_NUM; i++)
		{
			if (bossShot->visibleFlag = false)
			{
				bossShot->x = boss.x;
				bossShot->y = boss.h + bossShot->h / static_cast<float>(2);

				bossShot->visibleFlag = true;
				break;
			}
		}
		bossShot->shotCounter = 0;
	}
}