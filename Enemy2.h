#pragma once

class Enemy2
{
public:
	void Load();
	void Init();
	void Move();
	void Hit();
	void Damaged();
	void Draw();

	struct CIRCLE
	{
		float x, y, r;
	};
	CIRCLE circle;

	float  x, y;
	int  vx, vy;
	int  w, h;
	int  speed;
	int  graph;
	int  life;
	int	 shotInterval;
	int  damageCounter;
	int  damageGraph;
	int  directionY;
	int  avoidance;
	int defetedEnemy2Num;
	bool damageFlag;
};
