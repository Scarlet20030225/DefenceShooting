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
	/// タイトル描画
	/// </summary>
	void DrawTitle();

private:
	struct Title
	{
		int backGraph;
		int backX, backY;
		int TextGraph;
		int TextX, TextY;
		int pressEnterGraph;
		int pressEnterX, pressEnterY;
	};
	Title title;
};