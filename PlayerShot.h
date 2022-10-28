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
	/// �e�摜�ǂݍ���
	/// </summary>
	void Load();
	/// <summary>
	/// �e������
	/// </summary>
	void Init();
	/// <summary>
	/// ���@�̒e�ƃ{�X�̉~�`�����蔻��
	/// </summary>
	bool CheckBossHit(Boss& boss);
	/// <summary>
	/// ���@�̒e�ƎG���G1�̉~�`�����蔻��
	/// </summary>
	bool CheckEnemy1Hit(Enemy1& enemy1);
	/// <summary>
	/// ���@�̒e�ƎG���G2�̉~�`�����蔻��
	/// </summary>
	bool CheckEnemy2Hit(Enemy2& enemy2);
	/// <summary>
	/// ���@�̒e�ƎG���G3�̉~�`�����蔻��
	/// </summary>
	bool CheckEnemy3Hit(Enemy3& enemy3);
	/// <summary>
	/// ���@�̒e�ƎG���G4�̉~�`�����蔻��
	/// </summary>
	bool CheckEnemy4Hit(Enemy4& enemy4);
	/// <summary>
	/// �e�X�V����
	/// </summary>
	void Update(Boss& boss, Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4);
	/// <summary>
	/// �e�`��
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