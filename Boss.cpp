#include"DxLib.h"
#include"Boss.h"
#include"Common.h"

void Boss::Load()
{
	// 画像データ読み込み
	graph       = LoadGraph("img/Boss.png");
	damageGraph = LoadGraph("img/BossDamaged.png");
}

void Boss::Init()
{
	// 画像サイズ所得
	GetGraphSize(graph, &w, &h);
	// 座標初期化
	x        = WINDOW_WIDTH - 650;
	y        = WINDOW_HEIGHT / static_cast<float>(2) - (h / static_cast<float>(2));
	circle.x = WINDOW_WIDTH - 400;
	circle.y = WINDOW_HEIGHT / static_cast<float>(2);
	circle.r = h / static_cast<float>(2) - 3;
	// 速度&体力の初期化
	vx    = 0.0f;
	vy    = 0.0f;
	speed = BOSS_SPEED;
	life  = BOSS_LIFE;
	// その他(フラグ等)の初期化
	damageFlag = false;
	directionY = 0;
	burstEnemyNum = 0;
}

void Boss::Move()
{
	// 移動処理
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

void Boss::Hit()
{
	// 壁に当たった時の処理
	if (y < 150)
	{
		directionY = 0;
	}
	if (y > 930 - h)
	{
		directionY = 1;
	}
}

void Boss::Damaged()
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

void Boss::Draw()
{
	// 描画処理
	if (life > 0)
	{
		DrawBox(585, 100, 585 + (life * 5), 110, GetColor(255, 0, 0), true);
		if (damageFlag == true)
		{
			DrawGraph(x, y, damageGraph, TRUE);
		}
		else
		{
			DrawGraph(x, y, graph, TRUE);
			//DrawCircle(circle.x, circle.y, circle.r, GetColor(0, 255, 0));
		}
	}
	else
	{
		DeleteGraph(graph, damageGraph);
	}
}
