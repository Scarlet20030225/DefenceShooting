#include"DxLib.h"
#include"BossShot.h"

void BossShot::Load()
{
	// �摜�f�[�^�ǂݍ���
	graph = LoadGraph("img/BossShot.png");
}

void BossShot::Init()
{
	// �摜�T�C�Y����
	GetGraphSize(graph, &w, &h);

	visibleFlag = false;
	shotCounter = 0;
}

void BossShot::Update(Player& player)
{
	if (visibleFlag == true)
	{
		// �ei���ړ�������
		x -= 2;

		// ��ʊO�ɏo�Ă��܂����ꍇ�͒e�̑��݂�����
		if (x < 0)
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