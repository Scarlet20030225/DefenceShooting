#pragma once

class Enemy2
{
public:
	void Load();

	void Init();
	void Init1();

	void Move();
	void Move1();

	void Hit();
	void Damaged();
	void Draw();

	struct CIRCLE
	{
		float x, y, r;
		float x1, y1, r1;
	};
	CIRCLE circle;

	float  x, y;
	float  x1, y1;

	int  w, h;
	int  speed;
	int  graph;

	int  life;
	int  life1;

	int	 shotInterval;
	int  shotInterval1;

	int  damageCounter;
	int  damageCounter1;

	int  damageGraph;

	int  directionY;
	int  directionY1;

	int defetedEnemy2Num;

	bool damageFlag;
	bool damageFlag1;
};
