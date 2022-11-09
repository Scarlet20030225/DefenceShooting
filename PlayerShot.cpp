#include"DxLib.h"
#include"PlayerShot.h"

void PlayerShot::Load()
{
	// ‰æ‘œƒf[ƒ^“Ç‚İ‚İ
	rapidBullet     = LoadGraph("img/RapidShot.png");
	penetrateBullet = LoadGraph("img/PenetrateShot.png");
	missileBullet   = LoadGraph("img/MissileShot.png");
}

void PlayerShot::Init()
{
	// “–‚½‚è”»’è‰~‚Ì”¼Œa‚ğŠ“¾
	circle.r = 10.0f;
	// ‚»‚Ì‘¼(ƒtƒ‰ƒO“™)‚Ì‰Šú‰»
	graph       = rapidBullet;
	visibleFlag = false;
}

// ƒ{ƒX‚ÆƒvƒŒƒCƒ„[’e‚Ì“–‚½‚è”»’è
bool PlayerShot::CheckBossHit(Boss& boss)
{
	dx = circle.x - boss.circle.x;
	dy = circle.y - boss.circle.y;
	dr = dx * dx + dy * dy;

	ar = circle.r + boss.circle.r;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

// G‹›“G1‚ÆƒvƒŒƒCƒ„[’e‚Ì“–‚½‚è”»’è
bool PlayerShot::CheckEnemy1Hit(Enemy1& enemy1)
{
	dx = circle.x - enemy1.circle.x;
	dy = circle.y - enemy1.circle.y;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy1.circle.r;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

bool PlayerShot::CheckEnemy1Hit1(Enemy1& enemy1)
{
	dx = circle.x - enemy1.circle.x1;
	dy = circle.y - enemy1.circle.y1;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy1.circle.r1;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

bool PlayerShot::CheckEnemy1Hit2(Enemy1& enemy1)
{
	dx = circle.x - enemy1.circle.x2;
	dy = circle.y - enemy1.circle.y2;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy1.circle.r2;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

bool PlayerShot::CheckEnemy1Hit3(Enemy1& enemy1)
{
	dx = circle.x - enemy1.circle.x3;
	dy = circle.y - enemy1.circle.y3;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy1.circle.r3;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

bool PlayerShot::CheckEnemy1Hit4(Enemy1& enemy1)
{
	dx = circle.x - enemy1.circle.x4;
	dy = circle.y - enemy1.circle.y4;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy1.circle.r4;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

bool PlayerShot::CheckEnemy1Hit5(Enemy1& enemy1)
{
	dx = circle.x - enemy1.circle.x5;
	dy = circle.y - enemy1.circle.y5;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy1.circle.r5;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

// G‹›“G1‚ÆƒvƒŒƒCƒ„[’e‚Ì“–‚½‚è”»’è6
bool PlayerShot::CheckEnemy1Hit6(Enemy1& enemy1)
{
	dx = circle.x - enemy1.circle.x6;
	dy = circle.y - enemy1.circle.y6;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy1.circle.r6;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

// G‹›“G2‚ÆƒvƒŒƒCƒ„[’e‚Ì“–‚½‚è”»’è
bool PlayerShot::CheckEnemy2Hit(Enemy2& enemy2)
{
	dx = circle.x - enemy2.circle.x;
	dy = circle.y - enemy2.circle.y;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy2.circle.r;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

// G‹›“G2‚ÆƒvƒŒƒCƒ„[’e‚Ì“–‚½‚è”»’è1
bool PlayerShot::CheckEnemy2Hit1(Enemy2& enemy2)
{
	dx = circle.x - enemy2.circle.x1;
	dy = circle.y - enemy2.circle.y1;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy2.circle.r1;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

// G‹›“G2‚ÆƒvƒŒƒCƒ„[’e‚Ì“–‚½‚è”»’è2
bool PlayerShot::CheckEnemy2Hit2(Enemy2& enemy2)
{
	dx = circle.x - enemy2.circle.x2;
	dy = circle.y - enemy2.circle.y2;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy2.circle.r2;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

// G‹›“G2‚ÆƒvƒŒƒCƒ„[’e‚Ì“–‚½‚è”»’è3
bool PlayerShot::CheckEnemy2Hit3(Enemy2& enemy2)
{
	dx = circle.x - enemy2.circle.x3;
	dy = circle.y - enemy2.circle.y3;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy2.circle.r3;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

// G‹›“G2‚ÆƒvƒŒƒCƒ„[’e‚Ì“–‚½‚è”»’è4
bool PlayerShot::CheckEnemy2Hit4(Enemy2& enemy2)
{
	dx = circle.x - enemy2.circle.x4;
	dy = circle.y - enemy2.circle.y4;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy2.circle.r4;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

// G‹›“G2‚ÆƒvƒŒƒCƒ„[’e‚Ì“–‚½‚è”»’è5
bool PlayerShot::CheckEnemy2Hit5(Enemy2& enemy2)
{
	dx = circle.x - enemy2.circle.x5;
	dy = circle.y - enemy2.circle.y5;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy2.circle.r5;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

// G‹›“G2‚ÆƒvƒŒƒCƒ„[’e‚Ì“–‚½‚è”»’è6
bool PlayerShot::CheckEnemy2Hit6(Enemy2& enemy2)
{
	dx = circle.x - enemy2.circle.x6;
	dy = circle.y - enemy2.circle.y6;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy2.circle.r6;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

// G‹›“G2‚ÆƒvƒŒƒCƒ„[’e‚Ì“–‚½‚è”»’è7
bool PlayerShot::CheckEnemy2Hit7(Enemy2& enemy2)
{
	dx = circle.x - enemy2.circle.x7;
	dy = circle.y - enemy2.circle.y7;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy2.circle.r7;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

// G‹›“G3‚ÆƒvƒŒƒCƒ„[’e‚Ì“–‚½‚è”»’è
bool PlayerShot::CheckEnemy3Hit(Enemy3& enemy3)
{
	dx = circle.x - enemy3.circle.x;
	dy = circle.y - enemy3.circle.y;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy3.circle.r;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}
// G‹›“G3‚ÆƒvƒŒƒCƒ„[’e‚Ì“–‚½‚è”»’è1
bool PlayerShot::CheckEnemy3Hit1(Enemy3& enemy3)
{
	dx = circle.x - enemy3.circle.x1;
	dy = circle.y - enemy3.circle.y1;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy3.circle.r1;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}
// G‹›“G3‚ÆƒvƒŒƒCƒ„[’e‚Ì“–‚½‚è”»’è2
bool PlayerShot::CheckEnemy3Hit2(Enemy3& enemy3)
{
	dx = circle.x - enemy3.circle.x2;
	dy = circle.y - enemy3.circle.y2;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy3.circle.r2;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}
// G‹›“G3‚ÆƒvƒŒƒCƒ„[’e‚Ì“–‚½‚è”»’è3
bool PlayerShot::CheckEnemy3Hit3(Enemy3& enemy3)
{
	dx = circle.x - enemy3.circle.x3;
	dy = circle.y - enemy3.circle.y3;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy3.circle.r3;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}
// G‹›“G3‚ÆƒvƒŒƒCƒ„[’e‚Ì“–‚½‚è”»’è4
bool PlayerShot::CheckEnemy3Hit4(Enemy3& enemy3)
{
	dx = circle.x - enemy3.circle.x4;
	dy = circle.y - enemy3.circle.y4;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy3.circle.r4;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

// G‹›“G4‚ÆƒvƒŒƒCƒ„[’e‚Ì“–‚½‚è”»’è
bool PlayerShot::CheckEnemy4Hit(Enemy4& enemy4)
{
	dx = circle.x - enemy4.circle.x;
	dy = circle.y - enemy4.circle.y;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy4.circle.r;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}
// G‹›“G4‚ÆƒvƒŒƒCƒ„[’e‚Ì“–‚½‚è”»’è1
bool PlayerShot::CheckEnemy4Hit1(Enemy4& enemy4)
{
	dx = circle.x - enemy4.circle.x1;
	dy = circle.y - enemy4.circle.y1;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy4.circle.r1;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}
// G‹›“G4‚ÆƒvƒŒƒCƒ„[’e‚Ì“–‚½‚è”»’è2
bool PlayerShot::CheckEnemy4Hit2(Enemy4& enemy4)
{
	dx = circle.x - enemy4.circle.x2;
	dy = circle.y - enemy4.circle.y2;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy4.circle.r2;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}
// G‹›“G4‚ÆƒvƒŒƒCƒ„[’e‚Ì“–‚½‚è”»’è3
bool PlayerShot::CheckEnemy4Hit3(Enemy4& enemy4)
{
	dx = circle.x - enemy4.circle.x3;
	dy = circle.y - enemy4.circle.y3;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy4.circle.r3;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}
// G‹›“G4‚ÆƒvƒŒƒCƒ„[’e‚Ì“–‚½‚è”»’è4
bool PlayerShot::CheckEnemy4Hit4(Enemy4& enemy4)
{
	dx = circle.x - enemy4.circle.x4;
	dy = circle.y - enemy4.circle.y4;
	dr = dx * dx + dy * dy;

	ar = circle.r + enemy4.circle.r4;
	dl = ar * ar;

	if (dr < dl)
	{
		return true;
	}

	return false;
}

void PlayerShot::Update(Boss& boss, Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4)
{
	// ©‹@‚Ì’e‚ÌˆÚ“®ƒ‹[ƒ`ƒ“(’e‚ª‘¶İ‚·‚éê‡‚Ì‚İs‚¤)
	if (visibleFlag == true)
	{
		// ’ei‚ğˆÚ“®‚³‚¹‚é
		// ’e‚ªrapidBullet‚Ì
		if (graph == rapidBullet)
		{
			x        += SHOT_SPEED1;
			circle.x += SHOT_SPEED1;
		}
		// ’e‚ªpenetrateBullet‚Ì
		if (graph == penetrateBullet)
		{
			x        += SHOT_SPEED2;
			circle.x += SHOT_SPEED2;
		}
		// ’e‚ªmissileBullet‚Ì
		if (graph == missileBullet)
		{
			x        += SHOT_SPEED3;
			circle.x += SHOT_SPEED3;
		}

		// ‰æ–ÊŠO‚Éo‚Ä‚µ‚Ü‚Á‚½ê‡‚Í’e‚Ì‘¶İ‚ğÁ‚·
		if (x > WINDOW_WIDTH)
		{
			visibleFlag = false;
		}

		// ƒ{ƒX‚Ì‘Ì—Í‚ª0‚æ‚è‘½‚¢
		if (boss.life > 0)
		{
			// ƒ{ƒX‚É’e‚ª“–‚½‚Á‚½
			if(CheckBossHit(boss))
			{
				if (boss.moveCounter >= 30)
				{
					boss.damageFlag = true;
					boss.damageCounter = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						boss.life -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						boss.life -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						boss.life -= 10;
					}
				}
			}

			// G‹›“G1‚Ì‘Ì—Í‚ª0‚æ‚è‘½‚¢
			if (enemy1.life > 0)
			{
				// G‹›“G1‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy1Hit(enemy1))
				{
					enemy1.damageFlag = true;
					enemy1.damageCounter = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy1.life -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy1.life -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy1.life = 0;
					}
				}
			}
			if (enemy1.life1 > 0)
			{
				// G‹›“G1‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy1Hit1(enemy1))
				{
					enemy1.damageFlag1 = true;
					enemy1.damageCounter1 = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy1.life1 -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy1.life1 -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy1.life1 = 0;
					}
				}
			}
			if (enemy1.life2 > 0)
			{
				// G‹›“G1‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy1Hit2(enemy1))
				{
					enemy1.damageFlag2 = true;
					enemy1.damageCounter2 = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy1.life2 -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy1.life2 -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy1.life2 = 0;
					}
				}
			}
			if (enemy1.life3 > 0)
			{
				// G‹›“G1‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy1Hit3(enemy1))
				{
					enemy1.damageFlag3 = true;
					enemy1.damageCounter3 = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy1.life3 -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy1.life3 -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy1.life3 = 0;
					}
				}
			}
			if (enemy1.life4 > 0)
			{
				// G‹›“G1‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy1Hit4(enemy1))
				{
					enemy1.damageFlag4 = true;
					enemy1.damageCounter4 = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy1.life4 -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy1.life4 -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy1.life4 = 0;
					}
				}
			}
			if (enemy1.life5 > 0)
			{
				// G‹›“G1‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy1Hit5(enemy1))
				{
					enemy1.damageFlag5 = true;
					enemy1.damageCounter5 = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy1.life5 -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy1.life5 -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy1.life5 = 0;
					}
				}
			}
			if (enemy1.life6 > 0)
			{
				// G‹›“G1‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy1Hit6(enemy1))
				{
					enemy1.damageFlag6 = true;
					enemy1.damageCounter6 = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy1.life6 -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy1.life6 -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy1.life6 = 0;
					}
				}
			}
			// G‹›“G2‚Ì‘Ì—Í‚ª0‚æ‚è‘½‚¢
			if (enemy2.life > 0)
			{
				// G‹›“G2‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy2Hit(enemy2))
				{
					enemy2.damageFlag = true;
					enemy2.damageCounter = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy2.life -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy2.life -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy2.life = 0;
					}
				}
			}
			// G‹›“G2‚Ì‘Ì—Í‚ª0‚æ‚è‘½‚¢1
			if (enemy2.life1 > 0)
			{
				// G‹›“G2‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy2Hit1(enemy2))
				{
					enemy2.damageFlag1 = true;
					enemy2.damageCounter1 = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy2.life1 -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy2.life1 -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy2.life1 = 0;
					}
				}
			}
			// G‹›“G2‚Ì‘Ì—Í‚ª0‚æ‚è‘½‚¢2
			if (enemy2.life2 > 0)
			{
				// G‹›“G2‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy2Hit2(enemy2))
				{
					enemy2.damageFlag2 = true;
					enemy2.damageCounter2 = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy2.life2 -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy2.life2 -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy2.life2 = 0;
					}
				}
			}
			// G‹›“G2‚Ì‘Ì—Í‚ª0‚æ‚è‘½‚¢3
			if (enemy2.life3 > 0)
			{
				// G‹›“G2‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy2Hit3(enemy2))
				{
					enemy2.damageFlag3 = true;
					enemy2.damageCounter3 = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy2.life3 -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy2.life3 -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy2.life3 = 0;
					}
				}
			}
			// G‹›“G2‚Ì‘Ì—Í‚ª0‚æ‚è‘½‚¢4
			if (enemy2.life4 > 0)
			{
				// G‹›“G2‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy2Hit4(enemy2))
				{
					enemy2.damageFlag4 = true;
					enemy2.damageCounter4 = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy2.life4 -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy2.life4 -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy2.life4 = 0;
					}
				}
			}
			// G‹›“G2‚Ì‘Ì—Í‚ª0‚æ‚è‘½‚¢5
			if (enemy2.life5 > 0)
			{
				// G‹›“G2‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy2Hit5(enemy2))
				{
					enemy2.damageFlag5 = true;
					enemy2.damageCounter5 = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy2.life5 -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy2.life5 -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy2.life5 = 0;
					}
				}
			}
			// G‹›“G2‚Ì‘Ì—Í‚ª0‚æ‚è‘½‚¢6
			if (enemy2.life6 > 0)
			{
				// G‹›“G2‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy2Hit6(enemy2))
				{
					enemy2.damageFlag6 = true;
					enemy2.damageCounter6 = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy2.life6 -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy2.life6 -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy2.life6 = 0;
					}
				}
			}
			// G‹›“G2‚Ì‘Ì—Í‚ª0‚æ‚è‘½‚¢7
			if (enemy2.life7 > 0)
			{
				// G‹›“G2‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy2Hit7(enemy2))
				{
					enemy2.damageFlag7 = true;
					enemy2.damageCounter7 = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy2.life7 -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy2.life7 -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy2.life7 = 0;
					}
				}
			}
			// G‹›“G3‚Ì‘Ì—Í‚ª0‚æ‚è‘½‚¢
			if (enemy3.life > 0)
			{
				// G‹›“G3‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy3Hit(enemy3))
				{
					enemy3.damageFlag = true;
					enemy3.damageCounter = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy3.life -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy3.life -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy3.life = 0;
					}
				}
			}
			// G‹›“G3‚Ì‘Ì—Í‚ª0‚æ‚è‘½‚¢1
			if (enemy3.life1 > 0)
			{
				// G‹›“G3‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy3Hit1(enemy3))
				{
					enemy3.damageFlag1 = true;
					enemy3.damageCounter1 = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy3.life1 -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy3.life1 -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy3.life1 = 0;
					}
				}
			}
			// G‹›“G3‚Ì‘Ì—Í‚ª0‚æ‚è‘½‚¢2
			if (enemy3.life2 > 0)
			{
				// G‹›“G3‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy3Hit2(enemy3))
				{
					enemy3.damageFlag2 = true;
					enemy3.damageCounter2 = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy3.life2 -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy3.life2 -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy3.life2 = 0;
					}
				}
			}
			// G‹›“G3‚Ì‘Ì—Í‚ª0‚æ‚è‘½‚¢3
			if (enemy3.life3 > 0)
			{
				// G‹›“G3‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy3Hit3(enemy3))
				{
					enemy3.damageFlag3 = true;
					enemy3.damageCounter3 = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy3.life3 -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy3.life3 -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy3.life3 = 0;
					}
				}
			}
			// G‹›“G3‚Ì‘Ì—Í‚ª0‚æ‚è‘½‚¢4
			if (enemy3.life4 > 0)
			{
				// G‹›“G3‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy3Hit4(enemy3))
				{
					enemy3.damageFlag4 = true;
					enemy3.damageCounter4 = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy3.life4 -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy3.life4 -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy3.life4 = 0;
					}
				}
			}
			// G‹›“G4‚Ì‘Ì—Í‚ª0‚æ‚è‘½‚¢
			if (enemy4.life > 0)
			{
				if ((enemy4.x - x) < 50 && (enemy4.x - x) > 0)
				{
					if (y - enemy4.y < 150 && enemy4.y - y < 150)
					{
						if (210 < enemy4.y && enemy4.y < 870)
						{
							if (enemy4.y <= y)
							{
								enemy4.y -= enemy4.speed + 20;
								enemy4.circle.y = enemy4.y;
							}
							if (enemy4.y > y)
							{
								enemy4.y += enemy4.speed + 20;
								enemy4.circle.y = enemy4.y;
							}
						}
					}
				}
				// G‹›“G4‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy4Hit(enemy4))
				{
					enemy4.damageFlag = true;
					enemy4.damageCounter = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy4.life -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy4.life -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy4.life = 0;
					}
				}
			}
			// G‹›“G4‚Ì‘Ì—Í‚ª0‚æ‚è‘½‚¢1
			if (enemy4.life1 > 0)
			{
				if ((enemy4.x1 - x) < 50 && (enemy4.x1 - x) > 0)
				{
					if (y - enemy4.y1 < 150 && enemy4.y1 - y < 150)
					{
						if (210 < enemy4.y1 && enemy4.y1 < 870)
						{
							if (enemy4.y1 <= y)
							{
								enemy4.y1 -= enemy4.speed + 20;
								enemy4.circle.y1 = enemy4.y1;
							}
							if (enemy4.y1 > y)
							{
								enemy4.y1 += enemy4.speed + 20;
								enemy4.circle.y1 = enemy4.y1;
							}
						}
					}
				}
				// G‹›“G4‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy4Hit1(enemy4))
				{
					enemy4.damageFlag1 = true;
					enemy4.damageCounter1 = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy4.life1 -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy4.life1 -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy4.life1 = 0;
					}
				}
			}
			// G‹›“G4‚Ì‘Ì—Í‚ª0‚æ‚è‘½‚¢2
			if (enemy4.life2 > 0)
			{
				if ((enemy4.x2 - x) < 50 && (enemy4.x2 - x) > 0)
				{
					if (y - enemy4.y2 < 150 && enemy4.y2 - y < 150)
					{
						if (210 < enemy4.y2 && enemy4.y2 < 870)
						{
							if (enemy4.y2 <= y)
							{
								enemy4.y2 -= enemy4.speed + 20;
								enemy4.circle.y2 = enemy4.y2;
							}
							if (enemy4.y > y)
							{
								enemy4.y2 += enemy4.speed + 20;
								enemy4.circle.y2 = enemy4.y2;
							}
						}
					}
				}
				// G‹›“G4‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy4Hit2(enemy4))
				{
					enemy4.damageFlag2 = true;
					enemy4.damageCounter2 = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy4.life2 -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy4.life2 -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy4.life2 = 0;
					}
				}
			}
			// G‹›“G4‚Ì‘Ì—Í‚ª0‚æ‚è‘½‚¢3
			if (enemy4.life3 > 0)
			{
				if ((enemy4.x3 - x) < 50 && (enemy4.x3 - x) > 0)
				{
					if (y - enemy4.y3 < 150 && enemy4.y3 - y < 150)
					{
						if (210 < enemy4.y3 && enemy4.y3 < 870)
						{
							if (enemy4.y3 <= y)
							{
								enemy4.y3 -= enemy4.speed + 20;
								enemy4.circle.y3 = enemy4.y3;
							}
							if (enemy4.y3 > y)
							{
								enemy4.y3 += enemy4.speed + 20;
								enemy4.circle.y3 = enemy4.y3;
							}
						}
					}
				}
				// G‹›“G4‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy4Hit3(enemy4))
				{
					enemy4.damageFlag3 = true;
					enemy4.damageCounter3 = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy4.life3 -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy4.life3 -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy4.life3 = 0;
					}
				}
			}
			// G‹›“G4‚Ì‘Ì—Í‚ª0‚æ‚è‘½‚¢4
			if (enemy4.life4 > 0)
			{
				if ((enemy4.x4 - x) < 50 && (enemy4.x4 - x) > 0)
				{
					if (y - enemy4.y4 < 150 && enemy4.y4 - y < 150)
					{
						if (210 < enemy4.y4 && enemy4.y4 < 870)
						{
							if (enemy4.y4 <= y)
							{
								enemy4.y4 -= enemy4.speed + 20;
								enemy4.circle.y4 = enemy4.y4;
							}
							if (enemy4.y4 > y)
							{
								enemy4.y4 += enemy4.speed + 20;
								enemy4.circle.y4 = enemy4.y4;
							}
						}
					}
				}
				// G‹›“G4‚É’e‚ª“–‚½‚Á‚½
				if (CheckEnemy4Hit4(enemy4))
				{
					enemy4.damageFlag4 = true;
					enemy4.damageCounter4 = 0;

					// ’e‚ªRapidBullet‚Ì
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy4.life4 -= 1;
					}
					// ’e‚ªPenetrateBullet‚Ì
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy4.life4 -= 1;
					}
					// ’e‚ªMissileBullet‚Ì
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy4.life4 = 0;
					}
				}
			}
		}
	}
}

void PlayerShot::Draw()
{
	// •`‰æˆ—
	if (visibleFlag == true)
	{
		DrawGraph(x, y, graph, TRUE);
		//DrawCircle(circle.x, circle.y, circle.r, GetColor(0, 255, 0));
	}
}
