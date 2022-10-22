#pragma once
#include"Common.h"
#include"Player.h"

class BossShot
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
	/// �e�X�V����
	/// </summary>
	void Update(Player& player);
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
	int w, h;
	int visibleFlag;
	int graph;
	int shotGraph;
	int	shotCounter;
};