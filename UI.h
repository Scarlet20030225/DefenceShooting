#pragma once

class UI
{
public:
	/// <summary>
	/// UI画像読み込み
	/// </summary>
	void Load();
	/// <summary>
	/// UI画像読み込み
	/// </summary>
	void Init();
	/// <summary>
	/// UI描画
	/// </summary>
	void Draw();

	int graphBlackOut;
	float mode1X;
	float mode2X;
	float mode3X;
	float modeAllY;
};