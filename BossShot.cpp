#include"DxLib.h"
#include"BossShot.h"
#include<math.h>

void BossShot::Load()
{
	// 画像データ読み込み
	graph = LoadGraph("img/BossShot.png");
}

void BossShot::Init()
{
	// 画像サイズ所得
	GetGraphSize(graph, &w, &h);

	num = SHOT_NUM;
	shotCounter = 0;
	visibleFlag = false;
}

void BossShot::Update(Player& player)
{
	if (shotCounter == 0)
	{
		rad = atan2(player.y - y, player.x - x);
	}
	if (visibleFlag == true)
	{
		// 弾iを移動させる
		x -= 30 * cos(rad);

		// 画面外に出てしまった場合は弾の存在を消す
		if (x < 50)
		{
			visibleFlag = false;
		}
	}
}

void BossShot::Draw()
{
	// 描画処理
	if (visibleFlag == true)
	{
		DrawGraph(x, y, graph, TRUE);
	}
}