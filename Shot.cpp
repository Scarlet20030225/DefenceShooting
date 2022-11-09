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
	if (boss.life > 0)
	{
		bossShot->shotCounter++;
		if (bossShot->shotCounter%50 == 0)
		{
			for (int i = 0; i < SHOT_NUM; i++)
			{
				bossShot[i].visibleFlag = true;
				bossShot[i].x = boss.x + bossShot[i].w;
				bossShot[i].y = (boss.h + bossShot[i].h) / static_cast<float>(2) + boss.y;

				break;
			}
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

bool Shot::PlayerEnemy1Hit1(Player& player, Enemy1& enemy1)
{
	dx = player.circle.x - enemy1.circle.x1;
	dy = player.circle.y - enemy1.circle.y1;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy1.circle.r1;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

bool Shot::PlayerEnemy1Hit2(Player& player, Enemy1& enemy1)
{
	dx = player.circle.x - enemy1.circle.x2;
	dy = player.circle.y - enemy1.circle.y2;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy1.circle.r2;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

bool Shot::PlayerEnemy1Hit3(Player& player, Enemy1& enemy1)
{
	dx = player.circle.x - enemy1.circle.x3;
	dy = player.circle.y - enemy1.circle.y3;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy1.circle.r3;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

bool Shot::PlayerEnemy1Hit4(Player& player, Enemy1& enemy1)
{
	dx = player.circle.x - enemy1.circle.x4;
	dy = player.circle.y - enemy1.circle.y4;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy1.circle.r4;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

bool Shot::PlayerEnemy1Hit5(Player& player, Enemy1& enemy1)
{
	dx = player.circle.x - enemy1.circle.x5;
	dy = player.circle.y - enemy1.circle.y5;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy1.circle.r5;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

bool Shot::PlayerEnemy1Hit6(Player& player, Enemy1& enemy1)
{
	dx = player.circle.x - enemy1.circle.x6;
	dy = player.circle.y - enemy1.circle.y6;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy1.circle.r6;
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

bool Shot::PlayerEnemy2Hit1(Player& player, Enemy2& enemy2)
{
	dx = player.circle.x - enemy2.circle.x1;
	dy = player.circle.y - enemy2.circle.y1;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy2.circle.r1;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

bool Shot::PlayerEnemy2Hit2(Player& player, Enemy2& enemy2)
{
	dx = player.circle.x - enemy2.circle.x2;
	dy = player.circle.y - enemy2.circle.y2;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy2.circle.r2;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

bool Shot::PlayerEnemy2Hit3(Player& player, Enemy2& enemy2)
{
	dx = player.circle.x - enemy2.circle.x3;
	dy = player.circle.y - enemy2.circle.y3;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy2.circle.r3;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

bool Shot::PlayerEnemy2Hit4(Player& player, Enemy2& enemy2)
{
	dx = player.circle.x - enemy2.circle.x4;
	dy = player.circle.y - enemy2.circle.y4;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy2.circle.r4;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

bool Shot::PlayerEnemy2Hit5(Player& player, Enemy2& enemy2)
{
	dx = player.circle.x - enemy2.circle.x5;
	dy = player.circle.y - enemy2.circle.y5;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy2.circle.r5;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

bool Shot::PlayerEnemy2Hit6(Player& player, Enemy2& enemy2)
{
	dx = player.circle.x - enemy2.circle.x6;
	dy = player.circle.y - enemy2.circle.y6;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy2.circle.r6;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

bool Shot::PlayerEnemy2Hit7(Player& player, Enemy2& enemy2)
{
	dx = player.circle.x - enemy2.circle.x7;
	dy = player.circle.y - enemy2.circle.y7;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy2.circle.r7;
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
bool Shot::PlayerEnemy3Hit1(Player& player, Enemy3& enemy3)
{
	dx = player.circle.x - enemy3.circle.x1;
	dy = player.circle.y - enemy3.circle.y1;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy3.circle.r1;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}
bool Shot::PlayerEnemy3Hit2(Player& player, Enemy3& enemy3)
{
	dx = player.circle.x - enemy3.circle.x2;
	dy = player.circle.y - enemy3.circle.y2;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy3.circle.r2;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}
bool Shot::PlayerEnemy3Hit3(Player& player, Enemy3& enemy3)
{
	dx = player.circle.x - enemy3.circle.x3;
	dy = player.circle.y - enemy3.circle.y3;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy3.circle.r3;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}
bool Shot::PlayerEnemy3Hit4(Player& player, Enemy3& enemy3)
{
	dx = player.circle.x - enemy3.circle.x4;
	dy = player.circle.y - enemy3.circle.y4;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy3.circle.r4;
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
bool Shot::PlayerEnemy4Hit1(Player& player, Enemy4& enemy4)
{
	dx = player.circle.x - enemy4.circle.x1;
	dy = player.circle.y - enemy4.circle.y1;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy4.circle.r1;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}
bool Shot::PlayerEnemy4Hit2(Player& player, Enemy4& enemy4)
{
	dx = player.circle.x - enemy4.circle.x2;
	dy = player.circle.y - enemy4.circle.y2;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy4.circle.r2;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}
bool Shot::PlayerEnemy4Hit3(Player& player, Enemy4& enemy4)
{
	dx = player.circle.x - enemy4.circle.x3;
	dy = player.circle.y - enemy4.circle.y3;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy4.circle.r3;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}
bool Shot::PlayerEnemy4Hit4(Player& player, Enemy4& enemy4)
{
	dx = player.circle.x - enemy4.circle.x4;
	dy = player.circle.y - enemy4.circle.y4;
	dr = dx * dx + dy * dy;

	ar = player.circle.r + enemy4.circle.r4;
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
		if (enemy1.life1 > 0)
		{
			if (PlayerEnemy1Hit1(player, enemy1))
			{
				player.life -= 1;
				enemy1.life1 = 0;
				enemy1.defetedEnemy1Num += 1;
			}
		}
		if (enemy1.life2 > 0)
		{
			if (PlayerEnemy1Hit2(player, enemy1))
			{
				player.life -= 1;
				enemy1.life2 = 0;
				enemy1.defetedEnemy1Num += 1;
			}
		}
		if (enemy1.life3 > 0)
		{
			if (PlayerEnemy1Hit3(player, enemy1))
			{
				player.life -= 1;
				enemy1.life3 = 0;
				enemy1.defetedEnemy1Num += 1;
			}
		}
		if (enemy1.life4 > 0)
		{
			if (PlayerEnemy1Hit4(player, enemy1))
			{
				player.life -= 1;
				enemy1.life4 = 0;
				enemy1.defetedEnemy1Num += 1;
			}
		}
		if (enemy1.life5 > 0)
		{
			if (PlayerEnemy1Hit5(player, enemy1))
			{
				player.life -= 1;
				enemy1.life5 = 0;
				enemy1.defetedEnemy1Num += 1;
			}
		}
		if (enemy1.life6 > 0)
		{
			if (PlayerEnemy1Hit6(player, enemy1))
			{
				player.life -= 1;
				enemy1.life6 = 0;
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
		if (enemy2.life1 > 0)
		{
			if (PlayerEnemy2Hit1(player, enemy2))
			{
				player.life -= 1;
				enemy2.life1 = 0;
				enemy2.defetedEnemy2Num += 1;
			}
		}
		if (enemy2.life2 > 0)
		{
			if (PlayerEnemy2Hit2(player, enemy2))
			{
				player.life -= 1;
				enemy2.life2 = 0;
				enemy2.defetedEnemy2Num += 1;
			}
		}
		if (enemy2.life3 > 0)
		{
			if (PlayerEnemy2Hit3(player, enemy2))
			{
				player.life -= 1;
				enemy2.life3 = 0;
				enemy2.defetedEnemy2Num += 1;
			}
		}
		if (enemy2.life4 > 0)
		{
			if (PlayerEnemy2Hit4(player, enemy2))
			{
				player.life -= 1;
				enemy2.life4 = 0;
				enemy2.defetedEnemy2Num += 1;
			}
		}
		if (enemy2.life5 > 0)
		{
			if (PlayerEnemy2Hit5(player, enemy2))
			{
				player.life -= 1;
				enemy2.life5 = 0;
				enemy2.defetedEnemy2Num += 1;
			}
		}
		if (enemy2.life6 > 0)
		{
			if (PlayerEnemy2Hit6(player, enemy2))
			{
				player.life -= 1;
				enemy2.life6 = 0;
				enemy2.defetedEnemy2Num += 1;
			}
		}
		if (enemy2.life7 > 0)
		{
			if (PlayerEnemy2Hit7(player, enemy2))
			{
				player.life -= 1;
				enemy2.life7 = 0;
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
		if (enemy3.life1 > 0)
		{
			if (PlayerEnemy3Hit1(player, enemy3))
			{
				player.life -= 1;
				enemy3.life1 = 0;
				enemy3.defetedEnemy3Num += 1;
			}
		}
		if (enemy3.life2 > 0)
		{
			if (PlayerEnemy3Hit2(player, enemy3))
			{
				player.life -= 1;
				enemy3.life2 = 0;
				enemy3.defetedEnemy3Num += 1;
			}
		}
		if (enemy3.life3 > 0)
		{
			if (PlayerEnemy3Hit3(player, enemy3))
			{
				player.life -= 1;
				enemy3.life3 = 0;
				enemy3.defetedEnemy3Num += 1;
			}
		}
		if (enemy3.life4 > 0)
		{
			if (PlayerEnemy3Hit4(player, enemy3))
			{
				player.life -= 1;
				enemy3.life4 = 0;
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
		if (enemy4.life1 > 0)
		{
			if (PlayerEnemy4Hit1(player, enemy4))
			{
				player.life -= 1;
				enemy4.life1 = 0;
				enemy4.defetedEnemy4Num += 1;
			}
		}
		if (enemy4.life2 > 0)
		{
			if (PlayerEnemy4Hit2(player, enemy4))
			{
				player.life -= 1;
				enemy4.life2 = 0;
				enemy4.defetedEnemy4Num += 1;
			}
		}
		if (enemy4.life3 > 0)
		{
			if (PlayerEnemy4Hit3(player, enemy4))
			{
				player.life -= 1;
				enemy4.life3 = 0;
				enemy4.defetedEnemy4Num += 1;
			}
		}
		if (enemy4.life4 > 0)
		{
			if (PlayerEnemy4Hit4(player, enemy4))
			{
				player.life -= 1;
				enemy4.life4 = 0;
				enemy4.defetedEnemy4Num += 1;
			}
		}
	}
}
