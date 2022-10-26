#pragma once
#include"DxLib.h"
#include"Player.h"
#include"Back.h"
#include"BehavioralPattern.h"

/// <summary>
/// ゲーム初期化
/// </summary>
void GameInit(Player& player, Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4, BehavioralPattern& behavioralPattern, Boss & boss, PlayerShot* playerShot, BossShot* bossShot, Shot& shot, Back& back);
/// <summary>
/// ゲームループ
/// </summary>
void Loop(Player& player, Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4, BehavioralPattern& behavioralPattern, Boss& boss, PlayerShot* playerShot, BossShot* bossShot, Shot& shott, Back& back);