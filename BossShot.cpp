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

	shotCounter = 30;
	visibleFlag = false;
}

void BossShot::Update(Player& player)
{
	if (visibleFlag == true)
	{
		// �ei���ړ�������
		x -= 25;

		// ��ʊO�ɏo�Ă��܂����ꍇ�͒e�̑��݂�����
		if (x < 50)
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