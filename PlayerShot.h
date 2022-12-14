#pragma once
#include"Common.h"
#include"Boss.h"
#include"Enemy1.h"
#include"Enemy2.h"
#include"Enemy3.h"
#include"Enemy4.h"

class PlayerShot
{
public:
	/// <summary>
	/// 弾画像読み込み
	/// </summary>
	void Load();
	/// <summary>
	/// 弾初期化
	/// </summary>
	void Init();
	/// <summary>
	/// 自機の弾とボスの円形当たり判定
	/// </summary>
	bool CheckBossHit(Boss& boss);
	/// <summary>
	/// 自機の弾と雑魚敵1の円形当たり判定
	/// </summary>
	bool CheckEnemy1Hit(Enemy1& enemy1);
	bool CheckEnemy1Hit1(Enemy1& enemy1);
	bool CheckEnemy1Hit2(Enemy1& enemy1);
	bool CheckEnemy1Hit3(Enemy1& enemy1);
	bool CheckEnemy1Hit4(Enemy1& enemy1);
	bool CheckEnemy1Hit5(Enemy1& enemy1);
	bool CheckEnemy1Hit6(Enemy1& enemy1);
	/// <summary>
	/// 自機の弾と雑魚敵2の円形当たり判定
	/// </summary>
	bool CheckEnemy2Hit(Enemy2& enemy2);
	bool CheckEnemy2Hit1(Enemy2& enemy2);
	bool CheckEnemy2Hit2(Enemy2& enemy2);
	bool CheckEnemy2Hit3(Enemy2& enemy2);
	bool CheckEnemy2Hit4(Enemy2& enemy2);
	bool CheckEnemy2Hit5(Enemy2& enemy2);
	bool CheckEnemy2Hit6(Enemy2& enemy2);
	bool CheckEnemy2Hit7(Enemy2& enemy2);
	/// <summary>
	/// 自機の弾と雑魚敵3の円形当たり判定
	/// </summary>
	bool CheckEnemy3Hit(Enemy3& enemy3);
	bool CheckEnemy3Hit1(Enemy3& enemy3);
	bool CheckEnemy3Hit2(Enemy3& enemy3);
	bool CheckEnemy3Hit3(Enemy3& enemy3);
	bool CheckEnemy3Hit4(Enemy3& enemy3);
	/// <summary>
	/// 自機の弾と雑魚敵4の円形当たり判定
	/// </summary>
	bool CheckEnemy4Hit(Enemy4& enemy4);
	bool CheckEnemy4Hit1(Enemy4& enemy4);
	bool CheckEnemy4Hit2(Enemy4& enemy4);
	bool CheckEnemy4Hit3(Enemy4& enemy4);
	bool CheckEnemy4Hit4(Enemy4& enemy4);
	/// <summary>
	/// 弾更新処理
	/// </summary>
	void Update(Boss& boss, Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4);
	/// <summary>
	/// 弾描画
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