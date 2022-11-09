#pragma once

class Enemy1
{
public:
	void Load();

	void Init();
	void Init1();
	void Init2();
	void Init3();
	void Init4();
	void Init5();
	void Init6();

	void Move();
	void Move1();
	void Move2();
	void Move3();
	void Move4();
	void Move5();
	void Move6();

	void Hit();
	void Damaged();
	void Draw();

	struct CIRCLE
	{
		float x, y, r;
		float x1, y1, r1;
		float x2, y2, r2;
		float x3, y3, r3;
		float x4, y4, r4;
		float x5, y5, r5;
		float x6, y6, r6;
	};
	CIRCLE circle;

	float  x, y;
	float x1, y1;
	float x2, y2;
	float x3, y3;
	float x4, y4;
	float x5, y5;
	float x6, y6;

	int  w, h;
	int  speed;
	int  graph;

	int  life;
	int  life1;
	int  life2;
	int  life3;
	int  life4;
	int  life5;
	int  life6;

	int	 shotInterval;
	int  shotInterval1;
	int  shotInterval2;
	int  shotInterval3;
	int  shotInterval4;
	int  shotInterval5;
	int  shotInterval6;

	int  damageCounter;
	int  damageCounter1;
	int  damageCounter2;
	int  damageCounter3;
	int  damageCounter4;
	int  damageCounter5;
	int  damageCounter6;

	int  damageGraph;

	int  directionY;
	int  directionY1;
	int  directionY2;
	int  directionY3;
	int  directionY4;
	int  directionY5;
	int  directionY6;

	int  defetedEnemy1Num;

	bool damageFlag;
	bool damageFlag1;
	bool damageFlag2;
	bool damageFlag3;
	bool damageFlag4;
	bool damageFlag5;
	bool damageFlag6;
};