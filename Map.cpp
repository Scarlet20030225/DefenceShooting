#include"DxLib.h"
#include"Map.h"
#include"Common.h"

void Map::Load()
{
	backGraph             = LoadGraph("img/MapBack.png");
	intermediateStarGraph = LoadGraph("img/Star1.png");
	farStarGraph          = LoadGraph("img/Star2.png");
	cautionGraph          = LoadGraph("img/Caution.png");
	frameGraph            = LoadGraph("img/MapFrame.png");
}

void Map::Init()
{
	// 各画像サイズ所得
	GetGraphSize(backGraph, &backW, &backH);
	GetGraphSize(intermediateStarGraph, &intermediateStarW, &intermediateStarH);
	GetGraphSize(farStarGraph, &farStarW, &farStarH);
	GetGraphSize(cautionGraph, &cautionW, &cautionH);
	// 星(近距離)+背景色初期化
	back1X = 0;
	back2X = WINDOW_WIDTH;
	backY  = 150;
	// 星(中距離)初期化
	intermediateStar1X = 0;
	intermediateStar2X = WINDOW_WIDTH;
	intermediateStarY  = 150;
	// 星(遠距離)初期化
	farStar1X = 0;
	farStar2X = WINDOW_WIDTH;
	farStarY  = 150;
	// 警告線初期化
	cautionX  = 0;
	caution1Y = 150;
	caution2Y = 150 + 780;
	// フレーム初期化
	frameX = 0;
	frameY = 0;
	// スクロールスピード初期化
	scrollSpeed1 = SCROLL_SPEED1;
	scrollSpeed2 = SCROLL_SPEED2;
	scrollSpeed3 = SCROLL_SPEED3;
}

void Map::Scroll()
{
	// 星(近距離)+背景色のスクロールスピードを設定
	back1X -= scrollSpeed1;
	back2X -= scrollSpeed1;
	// 星(中距離)のスクロールスピードを設定
	intermediateStar1X -= scrollSpeed2;
	intermediateStar2X -= scrollSpeed2;
	// 星(遠距離)のスクロールスピードを設定
	farStar1X -= scrollSpeed3;
	farStar2X -= scrollSpeed3;
	// 警告線のスクロールスピードを設定
	caution1Y -= scrollSpeed3;
	caution2Y -= scrollSpeed3;
}

void Map::Draw()
{
	// 星(近距離)+背景色の描画
	DrawGraph(back1X, backY, backGraph, TRUE);
	DrawGraph(back2X, backY, backGraph, TRUE);
	if (back1X + backW == 0)
	{
		back1X = WINDOW_WIDTH;
	}
	if (back2X + backW == 0)
	{
		back2X = WINDOW_WIDTH;
	}
	// 星(中距離)の描画
	DrawGraph(intermediateStar1X, intermediateStarY, intermediateStarGraph, TRUE);
	DrawGraph(intermediateStar2X, intermediateStarY, intermediateStarGraph, TRUE);
	if (intermediateStar1X + intermediateStarW == 0)
	{
		intermediateStar1X = WINDOW_WIDTH;
	}
	if (intermediateStar2X + intermediateStarW == 0)
	{
		intermediateStar2X = WINDOW_WIDTH;
	}
	// 星(遠距離)の描画
	DrawGraph(farStar1X, farStarY, farStarGraph, TRUE);
	DrawGraph(farStar2X, farStarY, farStarGraph, TRUE);
	if (farStar1X + farStarW == 0)
	{
		farStar1X = WINDOW_WIDTH;
	}
	if (farStar2X + farStarW == 0)
	{
		farStar2X = WINDOW_WIDTH;
	}
	// 警告線の描画
	DrawGraph(cautionX, caution1Y, cautionGraph, TRUE);
	DrawGraph(cautionX, caution2Y, cautionGraph, TRUE);
	if (caution1Y + cautionH == 150)
	{
		caution1Y = 930;
	}
	if (caution2Y + cautionH == 150)
	{
		caution2Y = 930;
	}
	// フレームの描画
	DrawGraph(frameX, frameY, frameGraph, TRUE);
}