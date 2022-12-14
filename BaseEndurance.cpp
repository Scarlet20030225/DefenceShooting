#include"BaseEndurance.h"
#include"DxLib.h"
#include"Common.h"

void BaseEdurance::Load()
{
	enduranceGraph = LoadGraph("img/Endurance.png");
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

void BaseEdurance::Edurance(Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4)
{
	if (enemy1.x < 50 && enemy1.life > 0)
	{
		enemy1.life = 0;
		enduranceValue -= 1;
		enemy1.defetedEnemy1Num += 1;
	}
	if (enemy1.x1 < 50 && enemy1.life1 > 0)
	{
		enemy1.life1 = 0;
		enduranceValue -= 1;
		enemy1.defetedEnemy1Num += 1;
	}
	if (enemy1.x2 < 50 && enemy1.life2 > 0)
	{
		enemy1.life2 = 0;
		enduranceValue -= 1;
		enemy1.defetedEnemy1Num += 1;
	}
	if (enemy1.x3 < 50 && enemy1.life3 > 0)
	{
		enemy1.life3 = 0;
		enduranceValue -= 1;
		enemy1.defetedEnemy1Num += 1;
	}
	if (enemy1.x4 < 50 && enemy1.life4 > 0)
	{
		enemy1.life4 = 0;
		enduranceValue -= 1;
		enemy1.defetedEnemy1Num += 1;
	}
	if (enemy1.x5 < 50 && enemy1.life5 > 0)
	{
		enemy1.life5 = 0;
		enduranceValue -= 1;
		enemy1.defetedEnemy1Num += 1;
	}
	if (enemy1.x6 < 50 && enemy1.life6 > 0)
	{
		enemy1.life6 = 0;
		enduranceValue -= 1;
		enemy1.defetedEnemy1Num += 1;
	}
	if (enemy2.x < 50 && enemy2.life > 0)
	{
		enduranceValue -= 1;
		enemy2.life = 0;
		enemy2.defetedEnemy2Num += 1;
	}
	if (enemy2.x1 < 50 && enemy2.life1 > 0)
	{
		enduranceValue -= 1;
		enemy2.life1 = 0;
		enemy2.defetedEnemy2Num += 1;
	}
	if (enemy2.x2 < 50 && enemy2.life2 > 0)
	{
		enduranceValue -= 1;
		enemy2.life2 = 0;
		enemy2.defetedEnemy2Num += 1;
	}
	if (enemy2.x3 < 50 && enemy2.life3 > 0)
	{
		enduranceValue -= 1;
		enemy2.life3 = 0;
		enemy2.defetedEnemy2Num += 1;
	}
	if (enemy2.x4 < 50 && enemy2.life4 > 0)
	{
		enduranceValue -= 1;
		enemy2.life4 = 0;
		enemy2.defetedEnemy2Num += 1;
	}
	if (enemy2.x5 < 50 && enemy2.life5 > 0)
	{
		enduranceValue -= 1;
		enemy2.life5 = 0;
		enemy2.defetedEnemy2Num += 1;
	}
	if (enemy2.x6 < 50 && enemy2.life6 > 0)
	{
		enduranceValue -= 1;
		enemy2.life6 = 0;
		enemy2.defetedEnemy2Num += 1;
	}
	if (enemy2.x7 < 50 && enemy2.life7 > 0)
	{
		enduranceValue -= 1;
		enemy2.life7 = 0;
		enemy2.defetedEnemy2Num += 1;
	}
	if (enemy3.x < 50 && enemy3.life > 0)
	{
		enemy3.life = 0;
		enduranceValue -= 1;
		enemy3.defetedEnemy3Num += 1;
	}
	if (enemy3.x1 < 50 && enemy3.life1 > 0)
	{
		enemy3.life1 = 0;
		enduranceValue -= 1;
		enemy3.defetedEnemy3Num += 1;
	}
	if (enemy3.x2 < 50 && enemy3.life2 > 0)
	{
		enemy3.life2 = 0;
		enduranceValue -= 1;
		enemy3.defetedEnemy3Num += 1;
	}
	if (enemy3.x3 < 50 && enemy3.life3 > 0)
	{
		enemy3.life3 = 0;
		enduranceValue -= 1;
		enemy3.defetedEnemy3Num += 1;
	}
	if (enemy3.x4 < 50 && enemy3.life4 > 0)
	{
		enemy3.life4 = 0;
		enduranceValue -= 1;
		enemy3.defetedEnemy3Num += 1;
	}
	if (enemy4.x < 50 && enemy4.life > 0)
	{
		enemy4.life = 0;
		enduranceValue -= 1;
		enemy4.defetedEnemy4Num += 1;
	}
	if (enemy4.x1 < 50 && enemy4.life1 > 0)
	{
		enemy4.life1 = 0;
		enduranceValue -= 1;
		enemy4.defetedEnemy4Num += 1;
	}
	if (enemy4.x2 < 50 && enemy4.life2 > 0)
	{
		enemy4.life2 = 0;
		enduranceValue -= 1;
		enemy4.defetedEnemy4Num += 1;
	}
	if (enemy4.x3 < 50 && enemy4.life3 > 0)
	{
		enemy4.life3 = 0;
		enduranceValue -= 1;
		enemy4.defetedEnemy4Num += 1;
	}
	if (enemy4.x4 < 50 && enemy4.life4 > 0)
	{
		enemy4.life4 = 0;
		enduranceValue -= 1;
		enemy4.defetedEnemy4Num += 1;
	}
}

void BaseEdurance::Draw()
{
	//printfDx("Endurance = %d", enduranceValue);
	DrawGraph(24, 951, enduranceGraph, TRUE);
	if (enduranceValue == 5)
	{
		DrawGraph(24, 951, LostEndurance1Graph, TRUE);
	}
	if (enduranceValue == 4)
	{
		DrawGraph(24, 951, LostEndurance2Graph, TRUE);
	}
	if (enduranceValue == 3)
	{
		DrawGraph(24, 951, LostEndurance3Graph, TRUE);
	}
	if (enduranceValue == 2)
	{
		DrawGraph(24, 951, LostEndurance4Graph, TRUE);
	}
	if (enduranceValue == 1)
	{
		DrawGraph(24, 951, LostEndurance5Graph, TRUE);
	}
	if (enduranceValue == 0)
	{
		DrawGraph(24, 951, LostEndurance6Graph, TRUE);
	}
}
