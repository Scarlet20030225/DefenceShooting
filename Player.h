#pragma once
#include"UI.h"

class Player
{
public:
	/// <summary>
	/// �v���C���[�摜�ǂݍ���
	/// </summary>
	void Load();
	/// <summary>
	/// �v���C���[������
	/// </summary>
	void Init();
	/// <summary>
	/// �v���C���[�ړ�
	/// </summary>
	void Move(float deltaTime);
	/// <summary>
	/// �v���C���[���[�h�؂�ւ�
	/// </summary>
	void Mode();
	/// <summary>
	/// �v���C���[�ǌ��ˎ�
	/// </summary>
	void HitWall();
	/// <summary>
	/// �v���C���[�_���[�W
	/// </summary>
	void Damaged();
	/// <summary>
	/// �v���C���[�`��
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