#pragma once
#include"UI.h"

class Player
{
public:
	/// <summary>
	/// プレイヤー画像読み込み
	/// </summary>
	void Load();
	/// <summary>
	/// プレイヤー初期化
	/// </summary>
	void Init();
	/// <summary>
	/// プレイヤー移動
	/// </summary>
	void Move(float deltaTime);
	/// <summary>
	/// プレイヤーモード切り替え
	/// </summary>
	void Mode();
	/// <summary>
	/// プレイヤー壁激突時
	/// </summary>
	void HitWall();
	/// <summary>
	/// プレイヤーダメージ
	/// </summary>
	void Damaged();
	/// <summary>
	/// プレイヤー描画
	/// </summary>
	void Draw(UI& ui);

	struct CIRCLE
	{
		float x, y, r;
	};
	CIRCLE circle;

	float x, y;
	int w, h;
	int vx, vy;
	int speed;
	int graph;
	int life;
	int shotInterval;
	int graphMode1;
	int graphMode2;
	int graphMode3;
	bool isMove;
};