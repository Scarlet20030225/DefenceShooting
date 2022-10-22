#pragma once
#include"PlayerShot.h"
#include"BossShot.h"

class Shot
{
public:
	/// <summary>
	/// �e���ˏ���
	/// </summary>
	void PlayerBurst(Player& player, PlayerShot* playerShot);
	/// <summary>
	/// �e���ˏ���
	/// </summary>
	void BossBurst(Boss& boss, BossShot* bossShot);

	bool PlayerEnemy1Hit(Player& player, Enemy1& enemy1);
	bool PlayerEnemy2Hit(Player& player, Enemy2& enemy2);
	bool PlayerEnemy3Hit(Player& player, Enemy3& enemy3);
	bool PlayerEnemy4Hit(Player& player, Enemy4& enemy4);

	void CheckHit(Player& player, Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4);


	float dx, dy, dr;
	float ar;
	float dl;
};