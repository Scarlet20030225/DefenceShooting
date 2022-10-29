#include"DxLib.h"
#include"PlayerShot.h"

void PlayerShot::Load()
{
	// �摜�f�[�^�ǂݍ���
	rapidBullet     = LoadGraph("img/RapidShot.png");
	penetrateBullet = LoadGraph("img/PenetrateShot.png");
	missileBullet   = LoadGraph("img/MissileShot.png");
}

void PlayerShot::Init()
{
	// �����蔻��~�̔��a������
	circle.r = 10.0f;
	// ���̑�(�t���O��)�̏�����
	graph       = rapidBullet;
	visibleFlag = false;
}

// �{�X�ƃv���C���[�e�̓����蔻��
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

// �G���G1�ƃv���C���[�e�̓����蔻��
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

// �G���G2�ƃv���C���[�e�̓����蔻��
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

// �G���G3�ƃv���C���[�e�̓����蔻��
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

// �G���G4�ƃv���C���[�e�̓����蔻��
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

void PlayerShot::Update(Boss& boss, Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4)
{
	// ���@�̒e�̈ړ����[�`��(�e�����݂���ꍇ�̂ݍs��)
	if (visibleFlag == true)
	{
		// �ei���ړ�������
		// �e��rapidBullet�̎�
		if (graph == rapidBullet)
		{
			x        += SHOT_SPEED1;
			circle.x += SHOT_SPEED1;
		}
		// �e��penetrateBullet�̎�
		if (graph == penetrateBullet)
		{
			x        += SHOT_SPEED2;
			circle.x += SHOT_SPEED2;
		}
		// �e��missileBullet�̎�
		if (graph == missileBullet)
		{
			x        += SHOT_SPEED3;
			circle.x += SHOT_SPEED3;
		}

		// ��ʊO�ɏo�Ă��܂����ꍇ�͒e�̑��݂�����
		if (x > WINDOW_WIDTH)
		{
			visibleFlag = false;
		}

		// �{�X�̗̑͂�0��葽����
		if (boss.life > 0)
		{
			// �{�X�ɒe������������
			if(CheckBossHit(boss))
			{
				boss.damageFlag    = true;
				boss.damageCounter = 0;

				// �e��RapidBullet�̎�
				if (graph == rapidBullet)
				{
					visibleFlag = false;
					boss.life  -= 1;
				}
				// �e��PenetrateBullet�̎�
				if (graph == penetrateBullet)
				{
					visibleFlag = true;
					boss.life  -= 1;
				}
				// �e��MissileBullet�̎�
				if (graph == missileBullet)
				{
					visibleFlag = false;
					boss.life  -= 10;
				}
			}

			// �G���G1�̗̑͂�0��葽����
			if (enemy1.life > 0)
			{
				// �G���G1�ɒe������������
				if (CheckEnemy1Hit(enemy1))
				{
					enemy1.damageFlag = true;
					enemy1.damageCounter = 0;

					// �e��RapidBullet�̎�
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy1.life -= 1;
					}
					// �e��PenetrateBullet�̎�
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy1.life -= 1;
					}
					// �e��MissileBullet�̎�
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy1.life = 0;
					}
				}
			}
			// �G���G2�̗̑͂�0��葽����
			if (enemy2.life > 0)
			{
				// �G���G2�ɒe������������
				if (CheckEnemy2Hit(enemy2))
				{
					enemy2.damageFlag = true;
					enemy2.damageCounter = 0;

					// �e��RapidBullet�̎�
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy2.life -= 1;
					}
					// �e��PenetrateBullet�̎�
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy2.life -= 1;
					}
					// �e��MissileBullet�̎�
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy2.life = 0;
					}
				}
			}
			// �G���G3�̗̑͂�0��葽����
			if (enemy3.life > 0)
			{
				// �G���G3�ɒe������������
				if (CheckEnemy3Hit(enemy3))
				{
					enemy3.damageFlag = true;
					enemy3.damageCounter = 0;

					// �e��RapidBullet�̎�
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy3.life -= 1;
					}
					// �e��PenetrateBullet�̎�
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy3.life -= 1;
					}
					// �e��MissileBullet�̎�
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy3.life = 0;
					}
				}
			}
			// �G���G4�̗̑͂�0��葽����
			if (enemy4.life > 0)
			{
				if ((enemy4.x - x) < 50 && (enemy4.x - x) > 0)
				{
					if (y - enemy4.y < 150 && enemy4.y - y < 150)
					if (210 < enemy4.y && enemy4.y < 870)
					{
						if (enemy4.y < y)
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
				// �G���G4�ɒe������������
				if (CheckEnemy4Hit(enemy4))
				{
					enemy4.damageFlag = true;
					enemy4.damageCounter = 0;

					// �e��RapidBullet�̎�
					if (graph == rapidBullet)
					{
						visibleFlag = false;
						enemy4.life -= 1;
					}
					// �e��PenetrateBullet�̎�
					if (graph == penetrateBullet)
					{
						visibleFlag = true;
						enemy4.life -= 1;
					}
					// �e��MissileBullet�̎�
					if (graph == missileBullet)
					{
						visibleFlag = false;
						enemy4.life = 0;
					}
				}
			}
		}
	}
}

void PlayerShot::Draw()
{
	// �`�揈��
	if (visibleFlag == true)
	{
		DrawGraph(x, y, graph, TRUE);
		//DrawCircle(circle.x, circle.y, circle.r, GetColor(0, 255, 0));
	}
}
