#pragma once
#include"Common.h"
#include"Boss.h"
#include"Enemy1.h"
#include"Enemy2.h"
#include"Enemy3.h"
#include"Enemy4.h"
#include"BaseEndurance.h"

class PlayerShot
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
	/// ©‹@‚Ì’e‚Æƒ{ƒX‚Ì‰~Œ`“–‚½‚è”»’è
	/// </summary>
	bool CheckBossHit(Boss& boss);
	/// <summary>
	/// ©‹@‚Ì’e‚ÆG‹›“G1‚Ì‰~Œ`“–‚½‚è”»’è
	/// </summary>
	bool CheckEnemy1Hit(Enemy1& enemy1);
	/// <summary>
	/// ©‹@‚Ì’e‚ÆG‹›“G2‚Ì‰~Œ`“–‚½‚è”»’è
	/// </summary>
	bool CheckEnemy2Hit(Enemy2& enemy2);
	/// <summary>
	/// ©‹@‚Ì’e‚ÆG‹›“G3‚Ì‰~Œ`“–‚½‚è”»’è
	/// </summary>
	bool CheckEnemy3Hit(Enemy3& enemy3);
	/// <summary>
	/// ©‹@‚Ì’e‚ÆG‹›“G4‚Ì‰~Œ`“–‚½‚è”»’è
	/// </summary>
	bool CheckEnemy4Hit(Enemy4& enemy4);
	/// <summary>
	/// ’eXVˆ—
	/// </summary>
	void Update(Boss& boss, Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4);
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
	float dx, dy, dr;
	float ar;
	float dl;
	int visibleFlag;
	int rapidBullet;
	int penetrateBullet;
	int missileBullet;
	int missileBomb;
	int graph;
	int shotGraph;
};