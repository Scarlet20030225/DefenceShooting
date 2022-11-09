#pragma once


class Boss
{
public:
	/// <summary>
	/// �G�摜�ǂݍ���
	/// </summary>
	void Load();
	/// <summary>
	/// �G������
	/// </summary>
	void Init();
	/// <summary>
	/// �G�ړ�
	/// </summary>
	void Move();
	/// <summary>
	/// �G�ǏՓˎ�
	/// </summary>
	void Hit();
	/// <summary>
	/// �G�_���[�W
	/// </summary>
	void Damaged();
	/// <summary>
	/// �G�`��
	/// </summary>
	void Draw();

	struct CIRCLE
	{
		float x, y, r;
	};
	CIRCLE circle;

	float  x, y;
	int  w, h;
	int  vx, vy;
	int  speed;
	int  graph;
	int  life;
	int  moveCounter;
	int  damageCounter;
	int  damageGraph;
	int  burstEnemyNum;
	bool damageFlag;

	int directionY;
};