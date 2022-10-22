#include"DxLib.h"
#include"Player.h"
#include"Common.h"

void Player::Load()
{
	// 画像データ読み込み
	graphMode1 = LoadGraph("img/PlayerMode1.png");
	graphMode2 = LoadGraph("img/PlayerMode2.png");
	graphMode3 = LoadGraph("img/PlayerMode3.png");
}

void Player::Init()
{
	// 画像サイズ所得
	GetGraphSize(graph, &w, &h);
	// 座標初期化
	x        = WINDOW_WIDTH / 10;
	y        = WINDOW_HEIGHT / 2 - 32;
	circle.x = WINDOW_WIDTH / 10 + 70;
	circle.y = WINDOW_HEIGHT / static_cast<float>(2);
	circle.r = h / static_cast<float>(2) - 3;
	// 速度&体力の初期化
	vx    = 0.0f;
	vy    = 0.0f;
	speed = PLAYER_SPEED;
	life  = PLAYER_LIFE;
	// その他(フラグ等)の初期化
	graph        = graphMode1;
	isMove       = false;
	shotInterval = 0;
}

void Player::Move(float deltaTime)
{
	// 移動処理
	if (CheckHitKey(KEY_INPUT_UP))
	{
		vy = -speed;
		isMove = true;
	}
	if (CheckHitKey(KEY_INPUT_DOWN))
	{
		vy = +speed;
		isMove = true;
	}
	if (CheckHitKey(KEY_INPUT_LEFT))
	{
		vx = -speed;
		isMove = true;
	}
	if (CheckHitKey(KEY_INPUT_RIGHT))
	{
		vx = +speed;
		isMove = true;
	}

	// キー入力より移動速度を求める
	if (isMove)
	{
		vx *= deltaTime;
		vy *= deltaTime;
	}
	else
	{
		vx = 0.0f;
		vy = 0.0f;
	}

	// 位置更新
	x        += vx;
	circle.x += vx;
	y        += vy;
	circle.y += vy;
}

void Player::Mode()
{
	// プレイヤーのモードチェンジ機能の処理
	if (CheckHitKey(KEY_INPUT_Z))
	{
		graph = graphMode1;
	}
	if (CheckHitKey(KEY_INPUT_X))
	{
		graph = graphMode2;
	}
	if (CheckHitKey(KEY_INPUT_C))
	{
		graph = graphMode3;
	}
}

void Player::HitWall()
{
	// 壁に当たった時の処理
	if (x < 50)
	{
		x        = 50;
		circle.x = 50 + 70;
	}
	if (x > 1000)
	{
		x        = 1000;
		circle.x = 1000 + 70;
	}
	if (y < 150)
	{
		y        = 150;
		circle.y = 150 + 32;
	}
	if (y > 930 - 64)
	{
		y        = 930 - 64;
		circle.y = 930 - 64 + 32;
	}
}

void Player::Damaged()
{
}

void Player::Draw(UI& ui)
{
	// 描画処理
	if (graph == graphMode1)
	{
		DrawGraph(ui.mode2X, ui.modeAllY, ui.graphBlackOut, TRUE);
		DrawGraph(ui.mode3X, ui.modeAllY, ui.graphBlackOut, TRUE);
	}
	if (graph == graphMode2)
	{
		DrawGraph(ui.mode1X, ui.modeAllY, ui.graphBlackOut, TRUE);
		DrawGraph(ui.mode3X, ui.modeAllY, ui.graphBlackOut, TRUE);
	}
	if (graph == graphMode3)
	{
		DrawGraph(ui.mode1X, ui.modeAllY, ui.graphBlackOut, TRUE);
		DrawGraph(ui.mode2X, ui.modeAllY, ui.graphBlackOut, TRUE);
	}
	if (life > 0)
	{
		DrawGraph(x, y, graph, TRUE);
		//DrawCircle(circle.x, circle.y, circle.r, GetColor(0, 255, 0));
	}
}
