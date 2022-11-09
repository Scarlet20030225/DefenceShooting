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

void Enemy2::Init2()
{
	life2 = ENEMY2_LIFE;
	x2 = WINDOW_WIDTH + 260;
	y2 = 400;
	circle.x2 = x2;
	circle.y2 = y2;
	circle.r2 = w / static_cast<float>(2) - 3;
	// その他(フラグ等)の初期化
	damageFlag2 = false;
}

void Enemy2::Init3()
{
	life3 = ENEMY2_LIFE;
	x3 = WINDOW_WIDTH + 100;
	y3 = 800;
	circle.x3 = x3;
	circle.y3 = y3;
	circle.r3 = w / static_cast<float>(2) - 3;
	// その他(フラグ等)の初期化
	damageFlag3 = false;
}

void Enemy2::Init4()
{
	life4 = ENEMY2_LIFE;
	x4 = WINDOW_WIDTH + 110;
	y4 = 720;
	circle.x4 = x4;
	circle.y4 = y4;
	circle.r4 = w / static_cast<float>(2) - 3;
	// その他(フラグ等)の初期化
	damageFlag4 = false;
}

void Enemy2::Init5()
{
	life5 = ENEMY2_LIFE;
	x5 = WINDOW_WIDTH + 120;
	y5 = 640;
	circle.x5 = x5;
	circle.y5 = y5;
	circle.r5 = w / static_cast<float>(2) - 3;
	// その他(フラグ等)の初期化
	damageFlag5 = false;
}

void Enemy2::Init6()
{
	life6 = ENEMY2_LIFE;
	x6 = WINDOW_WIDTH + 100;
	y6 = 540;
	circle.x6 = x6;
	circle.y6 = y6;
	circle.r6 = w / static_cast<float>(2) - 3;
	// その他(フラグ等)の初期化
	damageFlag6 = false;
}

void Enemy2::Init7()
{
	life7 = ENEMY2_LIFE;
	x7 = WINDOW_WIDTH + 180;
	y7 = 540;
	circle.x7 = x7;
	circle.y7 = y7;
	circle.r7 = w / static_cast<float>(2) - 3;
	// その他(フラグ等)の初期化
	damageFlag7 = false;
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

void Enemy2::Move2()
{
	x2 -= speed;
	circle.x2 -= speed;
}

void Enemy2::Move3()
{
	x3 -= speed;
	circle.x3 -= speed;
}

void Enemy2::Move4()
{
	x4 -= speed;
	circle.x4 -= speed;
}

void Enemy2::Move5()
{
	x5 -= speed;
	circle.x5 -= speed;
}

void Enemy2::Move6()
{
	x6 -= speed;
	circle.x6 -= speed;
}

void Enemy2::Move7()
{
	x7 -= speed;
	circle.x7 -= speed;
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
			defetedEnemy2Num += 1;
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
			defetedEnemy2Num += 1;
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
			defetedEnemy2Num += 1;
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
			defetedEnemy2Num += 1;
		}
	}
	// ダメージを受けた時の処理5
	if (damageFlag5 == true)
	{
		damageCounter5++;
		if (damageCounter5 == 1)
		{
			damageFlag5 = false;
		}
		if (life5 <= 0)
		{
			defetedEnemy2Num += 1;
		}
	}
	// ダメージを受けた時の処理
	if (damageFlag6 == true)
	{
		damageCounter6++;
		if (damageCounter6 == 1)
		{
			damageFlag6 = false;
		}
		if (life6 <= 0)
		{
			defetedEnemy2Num += 1;
		}
	}
	// ダメージを受けた時の処理7
	if (damageFlag7 == true)
	{
		damageCounter7++;
		if (damageCounter7 == 1)
		{
			damageFlag7 = false;
		}
		if (life7 <= 0)
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
	if (life5 > 0)
	{
		if (damageFlag5 == true)
		{
			DrawRotaGraph2(x5, y5, w / static_cast<float>(2), h / static_cast<float>(2), 1.0f, angle, damageGraph, true, false);
		}
		else
		{
			DrawRotaGraph2(x5, y5, w / static_cast<float>(2), h / static_cast<float>(2), 1.0f, angle, graph, true, false);
			//DrawCircle(circle.x, circle.y, circle.r, GetColor(0, 255, 0));
		}
	}
	if (life6 > 0)
	{
		if (damageFlag6 == true)
		{
			DrawRotaGraph2(x6, y6, w / static_cast<float>(2), h / static_cast<float>(2), 1.0f, angle, damageGraph, true, false);
		}
		else
		{
			DrawRotaGraph2(x6, y6, w / static_cast<float>(2), h / static_cast<float>(2), 1.0f, angle, graph, true, false);
			//DrawCircle(circle.x, circle.y, circle.r, GetColor(0, 255, 0));
		}
	}
	if (life7 > 0)
	{
		if (damageFlag7 == true)
		{
			DrawRotaGraph2(x7, y7, w / static_cast<float>(2), h / static_cast<float>(2), 1.0f, angle, damageGraph, true, false);
		}
		else
		{
			DrawRotaGraph2(x7, y7, w / static_cast<float>(2), h / static_cast<float>(2), 1.0f, angle, graph, true, false);
			//DrawCircle(circle.x, circle.y, circle.r, GetColor(0, 255, 0));
		}
	}
}
