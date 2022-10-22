#pragma once
#include"PlayerShot.h"
#include"BossShot.h"

class Shot
{
public:
	/// <summary>
	/// ’e”­Ëˆ—
	/// </summary>
	void PlayerBurst(Player& player, PlayerShot* playerShot);
	/// <summary>
	/// ’e”­Ëˆ—
	/// </summary>
	void BossBurst(Boss& boss, BossShot* bossShot);
};