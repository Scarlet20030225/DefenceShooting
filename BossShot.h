#pragma once
#include"Common.h"
#include"Player.h"

class BossShot
{
public:
	/// <summary>
	/// ’e‰æ‘œ“Ç‚İ‚İ
	/// </summary>
	void Load();
	/// <summary>
	/// ’e‰Šú‰»
	/// </summary>
	void Init();
	/// <summary>
	/// ’eXVˆ—
	/// </summary>
	void Update(Player& player);
	/// <summary>
	/// ’e•`‰æ
	/// </summary>
	void Draw();

	struct CIRCLE
	{
		float x, y, r;
	};
	CIRCLE circle;

	float x, y;
	int w, h;
	int visibleFlag;
	int graph;
	int shotGraph;
	int	shotCounter;
};