#pragma once

class Map
{
public:
	/// <summary>
	/// マップ画像読み込み
	/// </summary>
	void Load();
	/// <summary>
	/// マップ初期化
	/// </summary>
	void Init();
	/// <summary>
	/// 背景スクロール
	/// </summary>
	void Scroll();
	/// <summary>
	/// マップ初期化
	/// </summary>
	void Draw();

private:
	int frameX, frameY;
	int back1X;
	int back2X;
	int backY;
	int backW, backH;
	int intermediateStar1X;
	int intermediateStar2X;
	int intermediateStarY;
	int intermediateStarW, intermediateStarH;
	int farStar1X;
	int farStar2X;
	int farStarY;
	int farStarW, farStarH;
	int cautionX;
	int caution1Y;
	int caution2Y;
	int cautionW, cautionH;
	int scrollSpeed1;
	int scrollSpeed2;
	int scrollSpeed3;
	int frameGraph;
	int backGraph;
	int intermediateStarGraph;
	int farStarGraph;
	int cautionGraph;
};