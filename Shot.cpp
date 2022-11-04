#include"DxLib.h"
#include"Shot.h"

void Shot::PlayerBurst(Player& player, PlayerShot* playerShot)
{
	if (CheckHitKey(KEY_INPUT_SPACE))
	{
		if (player.shotInterval == 0)	// 発射間隔のインターバルが0の時
		{
			for (int i = 0; i < SHOT_NUM; i++)
			{
				if (playerShot[i].visibleFlag == false)	// 弾の存在を示すフラグがfalseである場合
				{
					if (player.graph == player.graphMode1)	// プレイヤーの画像がモード1である場合
					{
						playerShot[i].graph = playerShot[i].rapidBullet;
						player.shotInterval = SHOT_INTERVAL1;
					}
					if (player.graph == player.graphMode2)	// プレイヤーの画像がモード2である場合
					{
						playerShot[i].graph = playerShot[i].penetrateBullet;
						player.shotInterval = SHOT_INTERVAL2;
					}
					if (player.graph == player.graphMode3)	// プレイヤーの画像がモード3である場合
					{
						playerShot[i].graph = playerShot[i].missileBullet;
						player.shotInterval = SHOT_INTERVAL3;
					}
					// 弾が出現する座標
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
	if (boss.life > 0)
	{
		bossShot->shotCounter--;
		if (bossShot->shotCounter == 0)
		{
			for (int i = 0; i < SHOT_NUM; i++)
			{
				bossShot[i].x = boss.x + bossShot[i].w;
				bossShot[i].y = (boss.h + bossShot[i].h) / static_cast<float>(2) + boss.y;

				bossShot[i].visibleFlag = true;
				break;
			}
			bossShot->shotCounter = 30;
		}
		//printfDx("shotCounter = %d", bossShot->shotCounter);
	}
}

bool Shot::PlayerEnemy1Hit(Player& player, Enemy1& enemy1)
{
	dx = player.circle.x - enemy1.circle.x;
	dy = player.circle.y - enemy1.circle.y;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy1.circle.r;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

bool Shot::PlayerEnemy2Hit(Player& player, Enemy2& enemy2)
{
	dx = player.circle.x - enemy2.circle.x;
	dy = player.circle.y - enemy2.circle.y;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy2.circle.r;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

bool Shot::PlayerEnemy3Hit(Player& player, Enemy3& enemy3)
{
	dx = player.circle.x - enemy3.circle.x;
	dy = player.circle.y - enemy3.circle.y;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy3.circle.r;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

bool Shot::PlayerEnemy4Hit(Player& player, Enemy4& enemy4)
{
	dx = player.circle.x - enemy4.circle.x;
	dy = player.circle.y - enemy4.circle.y;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy4.circle.r;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

void Shot::CheckHit(Player& player, Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4)
{
	if (player.life > 0)
	{
		if (enemy1.life > 0)
		{
			if (PlayerEnemy1Hit(player, enemy1))
			{
				player.life -= 1;
				enemy1.life = 0;
				enemy1.defetedEnemy1Num += 1;
			}
		}
		if (enemy2.life > 0)
		{
			if (PlayerEnemy2Hit(player, enemy2))
			{
				player.life -= 1;
				enemy2.life = 0;
				enemy2.defetedEnemy2Num += 1;
			}
		}
		if (enemy3.life > 0)
		{
			if (PlayerEnemy3Hit(player, enemy3))
			{
				player.life -= 1;
				enemy3.life = 0;
				enemy3.defetedEnemy3Num += 1;
			}
		}
		if (enemy4.life > 0)
		{
			if (PlayerEnemy4Hit(player, enemy4))
			{
				player.life -= 1;
				enemy4.life = 0;
				enemy4.defetedEnemy4Num += 1;
			}
		}
	}
}
