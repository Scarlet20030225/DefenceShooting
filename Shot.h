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
};