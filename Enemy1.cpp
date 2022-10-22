#include"Enemy1.h"
#include"DxLib.h"
#include"Common.h"

void Enemy1::Load()
{
	// 画像データ読み込み
	graph = LoadGraph("img/Enemy1.png");
	damageGraph = LoadGraph("img/Enemy1Damaged.png");
}

void Enemy1::Init()
{
	// 速度&体力の初期化
	speed = ENEMY1_SPEED;
	life  = ENEMY1_LIFE;
	directionY = GetRand(1);
	// 画像サイズ所得
	GetGraphSize(graph, &w, &h);
	// 座標初期化
	x        = WINDOW_WIDTH;
	y        = GetRand(700) + 150 + (h / static_cast<float>(2));
	circle.x = x;
	circle.y = y;
	circle.r = w / static_cast<float>(2) - 3;
	// その他(フラグ等)の初期化
	damageFlag = false;
}

void Enemy1::Move()
{
	// 移動処理
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
	// 壁に当たった時の処理
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
	// ダメージを受けた時の処理
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
	// 描画処理
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