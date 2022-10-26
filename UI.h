#pragma once

class UI
{
public:
	/// <summary>
	/// UI‰æ‘œ“Ç‚İ‚İ
	/// </summary>
	void Load();
	/// <summary>
	/// UI‰æ‘œ“Ç‚İ‚İ
	/// </summary>
	void Init();
	/// <summary>
	/// UI•`‰æ
	/// </summary>
	void Draw();

	int graphBlackOut;
	float mode1X;
	float mode2X;
	float mode3X;
	float modeAllY;
	int lostLifeGraph;
	float lostLife1X;
	float lostLife2X;
	float lostLife3X;
	float lostLifeAllY;
};