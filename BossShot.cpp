#include"DxLib.h"
#include"BossShot.h"
#include<math.h>

void BossShot::Load()
{
	// �摜�f�[�^�ǂݍ���
	graph = LoadGraph("img/BossShot.png");
}

void BossShot::Init()
{
	// �摜�T�C�Y����
	GetGraphSize(graph, &w, &h);

	num = SHOT_NUM;
	shotCounter = 0;
	visibleFlag = false;
}

void BossShot::Update(Player& player)
{
	if (visibleFlag == true)
	{
		// �ei���ړ�������
		x -= 30;

		// ��ʊO�ɏo�Ă��܂����ꍇ�͒e�̑��݂�����
		if (x < 45)
		{
			visibleFlag = false;
		}
	}
}

void BossShot::Draw()
{
	// �`�揈��
	if (visibleFlag == true)
	{
		DrawGraph(x, y, graph, TRUE);
	}
}