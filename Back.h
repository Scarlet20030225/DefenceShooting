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
		int graph;
		int x, y;
	};
	Title title;
};