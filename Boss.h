#pragma once


class Boss
{
public:
	/// <summary>
	/// “G‰æ‘œ“Ç‚İ‚İ
	/// </summary>
	void Load();
	/// <summary>
	/// “G‰Šú‰»
	/// </summary>
	void Init();
	/// <summary>
	/// “GˆÚ“®
	/// </summary>
	void Move();
	/// <summary>
	/// “G•ÇÕ“Ë
	/// </summary>
	void Hit();
	/// <summary>
	/// “Gƒ_ƒ[ƒW
	/// </summary>
	void Damaged();
	/// <summary>
	/// “G•`‰æ
	/// </summary>
	void Draw();

	struct CIRCLE
	{
		float x, y, r;
	};
	CIRCLE circle;

	float  x, y;
	int  w, h;
	int  vx, vy;
	int  speed;
	int  graph;
	int  life;
	int  moveCounter;
	int  damageCounter;
	int  damageGraph;
	int  burstEnemyNum;
	bool damageFlag;

	int directionY;
};