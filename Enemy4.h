#pragma once

class Enemy4
{
public:
	void Load();

	void Init();
	void Init1();
	void Init2();
	void Init3();
	void Init4();

	void Move();
	void Move1();
	void Move2();
	void Move3();
	void Move4();

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
	};
	CIRCLE circle;

	float  x, y;
	float  x1, y1;
	float  x2, y2;
	float  x3, y3;
	float  x4, y4;

	int  w, h;
	int  speed;
	int  graph;
	int  life;
	int  life1;
	int  life2;
	int  life3;
	int  life4;

	int	 shotInterval;
	int	 shotInterval1;
	int	 shotInterval2;
	int	 shotInterval3;
	int	 shotInterval4;
	
	int  damageGraph;

	int damageCounter;
	int damageCounter1;
	int damageCounter2;
	int damageCounter3;
	int damageCounter4;

	int defetedEnemy4Num;
	bool damageFlag;
	bool damageFlag1;
	bool damageFlag2;
	bool damageFlag3;
	bool damageFlag4;
};
