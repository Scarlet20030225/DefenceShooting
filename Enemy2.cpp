#include "Enemy2.h"
#include "DxLib.h"
#include "Common.h"

void Enemy2::Load()
{
	graph = LoadGraph("img/Enemy2.png");
	damageGraph = LoadGraph("img/Enemy2Damaged.png");
}

void Enemy2::Init()
{
	// 速度&体力の初期化
	speed = ENEMY2_SPEED;
	life = ENEMY2_LIFE;
	// 画像サイズ所得
	GetGraphSize(graph, &w, &h);
	// 座標初期化
	x = WINDOW_WIDTH + 100;
	y = 400;
	circle.x = x;
	circle.y = y;
	circle.r = w / static_cast<float>(2) - 3;
	// その他(フラグ等)の初期化
	damageFlag = false;
	defetedEnemy2Num = 0;
}

void Enemy2::Init1()
{
	life1 = ENEMY2_LIFE;
	x1 = WINDOW_WIDTH + 180;
	y1 = 400;
	circle.x1 = x1;
	circle.y1 = y1;
	circle.r1 = w / static_cast<float>(2) - 3;
	// その他(フラグ等)の初期化
	damageFlag1 = false;
}

void Enemy2::Move()
{
	x -= speed;
	circle.x -= speed;
}

void Enemy2::Move1()
{
	x1 -= speed;
	circle.x1 -= speed;
}

void Enemy2::Hit()
{
}

void Enemy2::Damaged()
{
	// ダメージを受けた時の処理
	if (damageFlag == true)
	{
		damageCounter++;
		if (damageCounter == 1)
		{
			damageFlag = false;
		}
		if (life <= 0)
		{
			defetedEnemy2Num += 1;
		}
	}
	// ダメージを受けた時の処理
	if (damageFlag1 == true)
	{
		damageCounter1++;
		if (damageCounter1 == 1)
		{
			damageFlag1 = false;
		}
		if (life1 <= 0)
		{
			defetedEnemy2Num += 1;
		}
	}
}

void Enemy2::Draw()
{
	// 描画処理
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
}
