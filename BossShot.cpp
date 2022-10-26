#include"DxLib.h"
#include"BossShot.h"

void BossShot::Load()
{
	// 画像データ読み込み
	graph = LoadGraph("img/BossShot.png");
}

void BossShot::Init()
{
	// 画像サイズ所得
	GetGraphSize(graph, &w, &h);

	visibleFlag = false;
	shotCounter = 0;
}

void BossShot::Update(Player& player)
{
	if (visibleFlag == true)
	{
		// 弾iを移動させる
		x -= 2;

		// 画面外に出てしまった場合は弾の存在を消す
		if (x < 0)
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