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
	// 速度&体力の初期化
	speed = ENEMY4_SPEED;
	life = ENEMY4_LIFE;
	// 画像サイズ所得
	GetGraphSize(graph, &w, &h);
	// 座標初期化
	x = WINDOW_WIDTH + 100;
	y = GetRand(700) + 150 + (h / static_cast<float>(2));
	circle.x = x;
	circle.y = y;
	circle.r = w / static_cast<float>(2) - 3;
	// その他(フラグ等)の初期化
	damageFlag = false;
	defetedEnemy4Num = 0;
}
void Enemy4::Init1()
{
	life1 = ENEMY4_LIFE;
	x1 = WINDOW_WIDTH + 100;
	y1 = GetRand(700) + 150 + (h / static_cast<float>(2));
	circle.x1 = x1;
	circle.y1 = y1;
	circle.r1 = w / static_cast<float>(2) - 3;
	// その他(フラグ等)の初期化
	damageFlag1 = false;
}
void Enemy4::Init2()
{
	life2 = ENEMY4_LIFE;
	x2 = WINDOW_WIDTH + 100;
	y2 = GetRand(700) + 150 + (h / static_cast<float>(2));
	circle.x2 = x2;
	circle.y2 = y2;
	circle.r2 = w / static_cast<float>(2) - 3;
	// その他(フラグ等)の初期化
	damageFlag2 = false;
}
void Enemy4::Init3()
{
	life3 = ENEMY4_LIFE;
	x3 = WINDOW_WIDTH + 100;
	y3 = GetRand(700) + 150 + (h / static_cast<float>(2));
	circle.x3 = x3;
	circle.y3 = y3;
	circle.r3 = w / static_cast<float>(2) - 3;
	// その他(フラグ等)の初期化
	damageFlag3 = false;
}
void Enemy4::Init4()
{
	life4 = ENEMY4_LIFE;
	x4 = WINDOW_WIDTH + 100;
	y4 = GetRand(700) + 150 + (h / static_cast<float>(2));
	circle.x4 = x4;
	circle.y4 = y4;
	circle.r4 = w / static_cast<float>(2) - 3;
	// その他(フラグ等)の初期化
	damageFlag4 = false;
}

void Enemy4::Move()
{
	x -= speed;
	circle.x -= speed;
}
void Enemy4::Move1()
{
	x1 -= speed;
	circle.x1 -= speed;
}
void Enemy4::Move2()
{
	x2 -= speed;
	circle.x2 -= speed;
}
void Enemy4::Move3()
{
	x3 -= speed;
	circle.x3 -= speed;
}
void Enemy4::Move4()
{
	x4 -= speed;
	circle.x4 -= speed;
}

void Enemy4::Hit()
{
	// 壁に当たった時の処理
	if (y < 150 + (h / static_cast<float>(2)))
	{
		y = 150 + (h / static_cast<float>(2));
	}
	if (y > 930 - (h / static_cast<float>(2)))
	{
		y > 930 - (h / static_cast<float>(2));
	}
	// 壁に当たった時の処理1
	if (y1 < 150 + (h / static_cast<float>(2)))
	{
		y1 = 150 + (h / static_cast<float>(2));
	}
	if (y1 > 930 - (h / static_cast<float>(2)))
	{
		y1 > 930 - (h / static_cast<float>(2));
	}
	// 壁に当たった時の処理2
	if (y2 < 150 + (h / static_cast<float>(2)))
	{
		y2 = 150 + (h / static_cast<float>(2));
	}
	if (y2 > 930 - (h / static_cast<float>(2)))
	{
		y2 > 930 - (h / static_cast<float>(2));
	}
	// 壁に当たった時の処理3
	if (y3 < 150 + (h / static_cast<float>(2)))
	{
		y3 = 150 + (h / static_cast<float>(2));
	}
	if (y3 > 930 - (h / static_cast<float>(2)))
	{
		y3 > 930 - (h / static_cast<float>(2));
	}
	// 壁に当たった時の処理4
	if (y4 < 150 + (h / static_cast<float>(2)))
	{
		y4 = 150 + (h / static_cast<float>(2));
	}
	if (y4 > 930 - (h / static_cast<float>(2)))
	{
		y4 > 930 - (h / static_cast<float>(2));
	}
}

void Enemy4::Damaged()
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
			defetedEnemy4Num += 1;
		}
	}
	// ダメージを受けた時の処理1
	if (damageFlag1 == true)
	{
		damageCounter1++;
		if (damageCounter1 == 1)
		{
			damageFlag1 = false;
		}
		if (life1 <= 0)
		{
			defetedEnemy4Num += 1;
		}
	}
	// ダメージを受けた時の処理2
	if (damageFlag2 == true)
	{
		damageCounter2++;
		if (damageCounter2 == 1)
		{
			damageFlag2 = false;
		}
		if (life2 <= 0)
		{
			defetedEnemy4Num += 1;
		}
	}
	// ダメージを受けた時の処理3
	if (damageFlag3 == true)
	{
		damageCounter3++;
		if (damageCounter3 == 1)
		{
			damageFlag3 = false;
		}
		if (life3 <= 0)
		{
			defetedEnemy4Num += 1;
		}
	}
	// ダメージを受けた時の処理4
	if (damageFlag4 == true)
	{
		damageCounter4++;
		if (damageCounter4 == 1)
		{
			damageFlag4 = false;
		}
		if (life4 <= 0)
		{
			defetedEnemy4Num += 1;
		}
	}
}

void Enemy4::Draw()
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
	if (life4 > 0)
	{
		if (damageFlag4 == true)
		{
			DrawRotaGraph2(x4, y4, w / static_cast<float>(2), h / static_cast<float>(2), 1.0f, angle, damageGraph, true, false);
		}
		else
		{
			DrawRotaGraph2(x4, y4, w / static_cast<float>(2), h / static_cast<float>(2), 1.0f, angle, graph, true, false);
			//DrawCircle(circle.x, circle.y, circle.r, GetColor(0, 255, 0));
		}
	}
}
