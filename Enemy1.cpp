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
	x        = WINDOW_WIDTH;
	y        = GetRand(700) + 150 + (h / static_cast<float>(2));
	circle.x = x;
	circle.y = y;
	circle.r = w / static_cast<float>(2) - 3;
	// ���̑�(�t���O��)�̏�����
	damageFlag = false;
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
	if (x < 50)
	{
		life = 0;
	}
}

void Enemy1::Damaged()
{
	// �_���[�W���󂯂����̏���
	if (damageFlag == true)
	{
		damageCounter++;
		if (damageCounter == 3)
		{
			damageFlag = false;
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
}