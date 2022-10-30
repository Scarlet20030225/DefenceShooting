#include "Enemy4.h"
#include "DxLib.h"
#include "Common.h"

void Enemy4::Load()
{
	graph = LoadGraph("img/Enemy4.png");
	damageGraph = LoadGraph("img/Enemy4Damaged.png");
}

void Enemy4::Init()
{
	// ���x&�̗͂̏�����
	speed = ENEMY4_SPEED;
	life = ENEMY4_LIFE;
	// �摜�T�C�Y����
	GetGraphSize(graph, &w, &h);
	// ���W������
	x = WINDOW_WIDTH;
	y = GetRand(700) + 150 + (h / static_cast<float>(2));
	circle.x = x;
	circle.y = y;
	circle.r = w / static_cast<float>(2) - 3;
	// ���̑�(�t���O��)�̏�����
	damageFlag = false;
	defetedEnemy4Num = 0;
}

void Enemy4::Move()
{
	x -= speed;
	circle.x -= speed;
}

void Enemy4::Hit()
{
	// �ǂɓ����������̏���
	if (y < 150 + (h / static_cast<float>(2)))
	{
		y = 150 + (h / static_cast<float>(2));
	}
	if (y > 930 - (h / static_cast<float>(2)))
	{
		y > 930 - (h / static_cast<float>(2));
	}
}

void Enemy4::Damaged()
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

void Enemy4::Draw()
{
	// �`�揈��
	static float angle = 0.0f;
	angle += 0.04f;
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
	else
	{
		DeleteGraph(graph, damageGraph);
	}
}
