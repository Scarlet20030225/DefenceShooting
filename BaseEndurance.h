#pragma once
#include"BehavioralPattern.h"

class BaseEdurance
{
public:
	/// <summary>
	/// Šî’n‘Ï‹v‰Šú‰»
	/// </summary>
	void Load();
	void Init();
	void Edurance(Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4);
	void Draw();


	int enduranceValue;
	int enduranceGraph;
	int LostEndurance1Graph;
	int LostEndurance2Graph;
	int LostEndurance3Graph;
	int LostEndurance4Graph;
	int LostEndurance5Graph;
	int LostEndurance6Graph;
	int LostEnduranceX, LostEnduranceY;
};