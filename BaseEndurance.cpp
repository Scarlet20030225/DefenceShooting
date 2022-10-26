#include"BaseEndurance.h"
#include"DxLib.h"
#include"Common.h"

void BaseEdurance::Load()
{
	LostEndurance1Graph = LoadGraph("img/LostEndurance1.png");
	LostEndurance2Graph = LoadGraph("img/LostEndurance2.png");
	LostEndurance3Graph = LoadGraph("img/LostEndurance3.png");
	LostEndurance4Graph = LoadGraph("img/LostEndurance4.png");
	LostEndurance5Graph = LoadGraph("img/LostEndurance5.png");
	LostEndurance6Graph = LoadGraph("img/LostEndurance6.png");
}

void BaseEdurance::Init()
{
	enduranceValue = ENDURANCE_VALUE;
}

void BaseEdurance::Draw()
{
	if (enduranceValue == 5)
	{
	}
	if (enduranceValue == 4)
	{
	}
	if (enduranceValue == 3)
	{
	}
	if (enduranceValue == 2)
	{
	}
	if (enduranceValue == 1)
	{
	}
	if (enduranceValue == 0)
	{
	}
}
