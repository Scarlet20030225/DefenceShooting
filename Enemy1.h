#pragma once

class Enemy1
{
public:
	void Load();
	void Init();
	void Init1();
	void Init2();
	void Init3();
	void Move();
	void Move1();
	void Move2();
	void Move3();
	void Hit();
	void Damaged();
	void Draw();

	struct CIRCLE
	{
		float x, y, r;
		float x1, y1, r1;
		float x2, y2, r2;
		float x3, y3, r3;
	};
	CIRCLE circle;

	float  x, y;
	float x1, y1;
	float x2, y2;
	float x3, y3;
	int  w, h;
	int  speed;
	int  graph;
	int  life;
	int  life1;
	int  life2;
	int  life3;
	int	 shotInterval;
	int  shotInterval1;
	int  shotInterval2;
	int  shotInterval3;
	int  damageCounter;
	int  damageCounter1;
	int  damageCounter2;
	int  damageCounter3;
	int  damageGraph;
	int  directionY;
	int  directionY1;
	int  directionY2;
	int  directionY3;
	int  defetedEnemy1Num;
	bool damageFlag;
	bool damageFlag1;
	bool damageFlag2;
	bool damageFlag3;
};