#include "Enemy3.h"
#include "DxLib.h"
#include "Common.h"

void Enemy3::Load()
{
	graph = LoadGraph("img/Enemy3.png");
	damageGraph = LoadGraph("img/Enemy3Damaged.png");
}

void Enemy3::Init()
{
	// 速度&体力の初期化
	speed = ENEMY3_SPEED;
	life = ENEMY3_LIFE;
	directionY = GetRand(1);
	// 画像サイズ所得
	GetGraphSize(graph, &w, &h);
	// 座標初期化
	x = WINDOW_WIDTH + 100;
	y = 850;
	circle.x = x;
	circle.y = y;
	circle.r = w / static_cast<float>(2) - 3;
	// その他(フラグ等)の初期化
	damageFlag = false;
	defetedEnemy3Num = 0;
}

void Enemy3::Init1()
{
	life1 = ENEMY3_LIFE;
	directionY1 = GetRand(1);
	x1 = WINDOW_WIDTH + 100;
	y1 = 230;
	circle.x1 = x1;
	circle.y1 = y1;
	circle.r1 = w / static_cast<float>(2) - 3;
	damageFlag1 = false;
}

void Enemy3::Init2()
{
	life2 = ENEMY3_LIFE;
	directionY2 = 0;
	x2 = WINDOW_WIDTH + 100;
	y2 = 540;
	circle.x2 = x2;
	circle.y2 = y2;
	circle.r2 = w / static_cast<float>(2) - 3;
	damageFlag2 = false;
}

void Enemy3::Init3()
{
	life3 = ENEMY3_LIFE;
	directionY3 = 1;
	x3 = WINDOW_WIDTH + 100;
	y3 = 540;
	circle.x3 = x3;
	circle.y3 = y3;
	circle.r3 = w / static_cast<float>(2) - 3;
	damageFlag3 = false;
}

void Enemy3::Init4()
{
	life4 = ENEMY3_LIFE;
	directionY4 = GetRand(1);
	x4 = WINDOW_WIDTH + 100;
	y4 = GetRand(700) + 150 + (h / static_cast<float>(2));
	circle.x4 = x4;
	circle.y4 = y4;
	circle.r4 = w / static_cast<float>(2) - 3;
	damageFlag4 = false;
}

void Enemy3::Move()
{
	if (directionY == 0)
	{
		y += speed;
		circle.y += speed;
		if (y <= 540)
		{
			x += speed / static_cast<float>(2);
			circle.x += speed / static_cast<float>(2);
		}
		if (y > 540)
		{
			x -= speed;
			circle.x -= speed;
		}
	}
	if (directionY == 1)
	{
		y -= speed;
		circle.y -= speed;
		if (y <= 540)
		{
			x += speed / static_cast<float>(2);
			circle.x += speed / static_cast<float>(2);
		}
		if (y > 540)
		{
			x -= speed;
			circle.x -= speed;
		}
	}
}
void Enemy3::Move1()
{
	if (directionY1 == 0)
	{
		y1 += speed;
		circle.y1 += speed;
		if (y1 <= 540)
		{
			x1 += speed / static_cast<float>(2);
			circle.x1 += speed / static_cast<float>(2);
		}
		if (y1 > 540)
		{
			x1 -= speed;
			circle.x1 -= speed;
		}
	}
	if (directionY1 == 1)
	{
		y1 -= speed;
		circle.y1 -= speed;
		if (y1 <= 540)
		{
			x1 += speed / static_cast<float>(2);
			circle.x1 += speed / static_cast<float>(2);
		}
		if (y1 > 540)
		{
			x1 -= speed;
			circle.x1 -= speed;
		}
	}
}
void Enemy3::Move2()
{
	if (directionY2 == 0)
	{
		y2 += speed;
		circle.y2 += speed;
		if (y2 <= 540)
		{
			x2 += speed / static_cast<float>(2);
			circle.x2 += speed / static_cast<float>(2);
		}
		if (y2 > 540)
		{
			x2 -= speed;
			circle.x2 -= speed;
		}
	}
	if (directionY2 == 1)
	{
		y2 -= speed;
		circle.y2 -= speed;
		if (y2 <= 540)
		{
			x2 += speed / static_cast<float>(2);
			circle.x2 += speed / static_cast<float>(2);
		}
		if (y2 > 540)
		{
			x2 -= speed;
			circle.x2 -= speed;
		}
	}
}
void Enemy3::Move3()
{
	if (directionY3 == 0)
	{
		y3 += speed;
		circle.y3 += speed;
		if (y3 <= 540)
		{
			x3 += speed / static_cast<float>(2);
			circle.x3 += speed / static_cast<float>(2);
		}
		if (y3 > 540)
		{
			x3 -= speed;
			circle.x3 -= speed;
		}
	}
	if (directionY3 == 1)
	{
		y3 -= speed;
		circle.y3 -= speed;
		if (y3 <= 540)
		{
			x3 += speed / static_cast<float>(2);
			circle.x3 += speed / static_cast<float>(2);
		}
		if (y3 > 540)
		{
			x3 -= speed;
			circle.x3 -= speed;
		}
	}
}
void Enemy3::Move4()
{
	if (directionY4 == 0)
	{
		y4 += speed;
		circle.y4 += speed;
		if (y4 <= 540)
		{
			x4 += speed / static_cast<float>(2);
			circle.x4 += speed / static_cast<float>(2);
		}
		if (y4 > 540)
		{
			x4 -= speed;
			circle.x4 -= speed;
		}
	}
	if (directionY4 == 1)
	{
		y4 -= speed;
		circle.y4 -= speed;
		if (y4 <= 540)
		{
			x4 += speed / static_cast<float>(2);
			circle.x4 += speed / static_cast<float>(2);
		}
		if (y4 > 540)
		{
			x4 -= speed;
			circle.x4 -= speed;
		}
	}
}

void Enemy3::Hit()
{
	// 壁に当たった時の処理
	if (y < 150 + (h / static_cast<float>(2)))
	{
		directionY = 0;
	}
	if (y > 930 - (h / static_cast<float>(2)))
	{
		directionY = 1;
	}
	// 壁に当たった時の処理1
	if (y1 < 150 + (h / static_cast<float>(2)))
	{
		directionY1 = 0;
	}
	if (y1 > 930 - (h / static_cast<float>(2)))
	{
		directionY1 = 1;
	}
	// 壁に当たった時の処理2
	if (y2 < 150 + (h / static_cast<float>(2)))
	{
		directionY2 = 0;
	}
	if (y2 > 930 - (h / static_cast<float>(2)))
	{
		directionY2 = 1;
	}
	// 壁に当たった時の処理3
	if (y3 < 150 + (h / static_cast<float>(2)))
	{
		directionY3 = 0;
	}
	if (y3 > 930 - (h / static_cast<float>(2)))
	{
		directionY3 = 1;
	}
	// 壁に当たった時の処理
	if (y4 < 150 + (h / static_cast<float>(2)))
	{
		directionY4 = 0;
	}
	if (y4 > 930 - (h / static_cast<float>(2)))
	{
		directionY4 = 1;
	}
}

void Enemy3::Damaged()
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
			defetedEnemy3Num += 1;
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
			defetedEnemy3Num += 1;
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
			defetedEnemy3Num += 1;
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
			defetedEnemy3Num += 1;
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
			defetedEnemy3Num += 1;
		}
	}
}

void Enemy3::Draw()
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
