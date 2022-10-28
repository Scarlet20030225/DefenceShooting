#pragma once

class Back
{
public:
	/// <summary>
	/// タイトル画像読み込み
	/// </summary>
	void LoadTitle();
	/// <summary>
	/// タイトル初期化
	/// </summary>
	void InitTitle();
	/// <summary>
	/// 背景スクロール
	/// </summary>
	void Scroll();
	/// <summary>
	/// タイトル描画
	/// </summary>
	void DrawTitle();

private:
	struct Title
	{
		int backGraph;
		int backX, backY;
		int textGraph;
		int textX, textY;
		int textW, textH;
		int star1Graph;
		int star11X;
		int star12X;
		int star1W, star1H;
		int star2Graph;
		int star21X;
		int star22X;
		int star2W, star2H;
		int starY;
		int pressEnterGraph;
		int pressEnterX, pressEnterY;
		int scrollSpeed1;
		int scrollSpeed2;
		int alphaCount1;
		int alphaCount2;
	};
	Title title;
};