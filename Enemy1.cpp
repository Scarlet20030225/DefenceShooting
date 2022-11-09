#include"Enemy1.h"
#include"DxLib.h"
#include"Common.h"

void Enemy1::Load()
{
	// �摜�f�[�^�ǂݍ���
	graph = LoadGraph("img/Enemy1.png");
	damageGraph = LoadGraph("img/Enemy1Damaged.png");
}

void Enemy1::Init()
{
	// ���x&�̗͂̏�����
	speed = ENEMY1_SPEED;
	life  = ENEMY1_LIFE;
	directionY = GetRand(1);
	// �摜�T�C�Y����
	GetGraphSize(graph, &w, &h);
	// ���W������
	x        = WINDOW_WIDTH + 100;
	y        = 540;
	circle.x = x;
	circle.y = y;
	circle.r = w / static_cast<float>(2) - 3;
	// ���̑�(�t���O��)�̏�����
	damageFlag = false;
	defetedEnemy1Num = 0;
}

void Enemy1::Init1()
{
	life1 = ENEMY1_LIFE;
	directionY1 = GetRand(1);
	// ���W������
	x1 = WINDOW_WIDTH + 100;
	y1 = 930 - (h / static_cast<float>(2));
	circle.x1 = x1;
	circle.y1 = y1;
	circle.r1 = w / static_cast<float>(2) - 3;
	// ���̑�(�t���O��)�̏�����
	damageFlag1 = false;
}

void Enemy1::Init2()
{
	life2 = ENEMY1_LIFE;
	directionY2 = GetRand(1);
	// ���W������
	x2 = WINDOW_WIDTH + 100;
	y2 = 150 + (h / static_cast<float>(2));
	circle.x2 = x2;
	circle.y2 = y2;
	circle.r2 = w / static_cast<float>(2) - 3;
	// ���̑�(�t���O��)�̏�����
	damageFlag2 = false;
}

void Enemy1::Init3()
{
	life3 = ENEMY1_LIFE;
	directionY3 = GetRand(1);
	// ���W������
	x3 = WINDOW_WIDTH + 100;
	y3 = 540;
	circle.x3 = x3;
	circle.y3 = y3;
	circle.r3 = w / static_cast<float>(2) - 3;
	// ���̑�(�t���O��)�̏�����
	damageFlag3 = false;
}

void Enemy1::Move()
{
	// �ړ�����
	x        -= speed / static_cast<float>(2);
	circle.x -= speed / static_cast<float>(2);
	if (directionY == 0)
	{
		y        += speed;
		circle.y += speed;
	}
	if (directionY == 1)
	{
		y        -= speed;
		circle.y -= speed;
	}
}

void Enemy1::Move1()
{
	// �ړ�����
	x1 -= speed / static_cast<float>(2);
	circle.x1 -= speed / static_cast<float>(2);
	if (directionY1 == 0)
	{
		y1 += speed;
		circle.y1 += speed;
	}
	if (directionY1 == 1)
	{
		y1 -= speed;
		circle.y1 -= speed;
	}
}

void Enemy1::Move2()
{
	// �ړ�����
	x2 -= speed / static_cast<float>(2);
	circle.x2 -= speed / static_cast<float>(2);
	if (directionY2 == 0)
	{
		y2 += speed;
		circle.y2 += speed;
	}
	if (directionY2 == 1)
	{
		y2 -= speed;
		circle.y2 -= speed;
	}
}

void Enemy1::Move3()
{
	// �ړ�����
	x3 -= speed / static_cast<float>(2);
	circle.x3 -= speed / static_cast<float>(2);
	if (directionY3 == 0)
	{
		y3 += speed;
		circle.y3 += speed;
	}
	if (directionY3 == 1)
	{
		y3 -= speed;
		circle.y3 -= speed;
	}
}

void Enemy1::Hit()
{
	// �ǂɓ����������̏���
	if (y < 150 + (h / static_cast<float>(2)))
	{
		directionY = 0;
	}
	if (y > 930 - (h / static_cast<float>(2)))
	{
		directionY = 1;
	}
	// �ǂɓ����������̏���1
	if (y1 < 150 + (h / static_cast<float>(2)))
	{
		directionY1 = 0;
	}
	if (y1 > 930 - (h / static_cast<float>(2)))
	{
		directionY1 = 1;
	}
	// �ǂɓ����������̏���2
	if (y2 < 150 + (h / static_cast<float>(2)))
	{
		directionY2 = 0;
	}
	if (y2 > 930 - (h / static_cast<float>(2)))
	{
		directionY2 = 1;
	}
	// �ǂɓ����������̏���3
	if (y3 < 150 + (h / static_cast<float>(2)))
	{
		directionY3 = 0;
	}
	if (y3 > 930 - (h / static_cast<float>(2)))
	{
		directionY3 = 1;
	}
}

void Enemy1::Damaged()
{
	// �_���[�W���󂯂����̏���
	if (damageFlag == true)
	{
		damageCounter++;
		if (damageCounter == 1)
		{
			damageFlag = false;
		}
		if (life <= 0)
		{
			defetedEnemy1Num += 1;
		}
	}
	// �_���[�W���󂯂����̏���1
	if (damageFlag1 == true)
	{
		damageCounter1++;
		if (damageCounter1 == 1)
		{
			damageFlag1 = false;
		}
		if (life1 <= 0)
		{
			defetedEnemy1Num += 1;
		}
	}
	// �_���[�W���󂯂����̏���2
	if (damageFlag2 == true)
	{
		damageCounter2++;
		if (damageCounter2 == 1)
		{
			damageFlag2 = false;
		}
		if (life2 <= 0)
		{
			defetedEnemy1Num += 1;
		}
	}
	// �_���[�W���󂯂����̏���3
	if (damageFlag3 == true)
	{
		damageCounter3++;
		if (damageCounter3 == 1)
		{
			damageFlag3 = false;
		}
		if (life3 <= 0)
		{
			defetedEnemy1Num += 1;
		}
	}
}

void Enemy1::Draw()
{
	// �`�揈��
	static float angle =  0.0f;
	angle             += 0.04f;
	if (life > 0)
	{
		if (damageFlag == true)
		{
			DrawRotaGraph2(x, y, w / static_cast<float>(2), h / static_cast<float>(2), 1.0f, angle, damageGraph, true, false);
		}
		else
		{
			DrawRotaGraph2(x, y, w / static_cast<float>(2), h / static_cast<float>(2), 1.0f, angle, graph, true, false);
			//DrawCircle(circle.x, circle.y, circle.r, GetColor(0, 255, 0));
		}
	}
	if (life1 > 0)
	{
		if (damageFlag1 == true)
		{
			DrawRotaGraph2(x1, y1, w / static_cast<float>(2), h / static_cast<float>(2), 1.0f, angle, damageGraph, true, false);
		}
		else
		{
			DrawRotaGraph2(x1, y1, w / static_cast<float>(2), h / static_cast<float>(2), 1.0f, angle, graph, true, false);
			//DrawCircle(circle.x, circle.y, circle.r, GetColor(0, 255, 0));
		}
	}
	if (life2 > 0)
	{
		if (damageFlag2 == true)
		{
			DrawRotaGraph2(x2, y2, w / static_cast<float>(2), h / static_cast<float>(2), 1.0f, angle, damageGraph, true, false);
		}
		else
		{
			DrawRotaGraph2(x2, y2, w / static_cast<float>(2), h / static_cast<float>(2), 1.0f, angle, graph, true, false);
			//DrawCircle(circle.x, circle.y, circle.r, GetColor(0, 255, 0));
		}
	}
	if (life3 > 0)
	{
		if (damageFlag3 == true)
		{
			DrawRotaGraph2(x3, y3, w / static_cast<float>(2), h / static_cast<float>(2), 1.0f, angle, damageGraph, true, false);
		}
		else
		{
			DrawRotaGraph2(x3, y3, w / static_cast<float>(2), h / static_cast<float>(2), 1.0f, angle, graph, true, false);
			//DrawCircle(circle.x, circle.y, circle.r, GetColor(0, 255, 0));
		}
	}
}