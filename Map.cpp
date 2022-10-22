#include"DxLib.h"
#include"Map.h"
#include"Common.h"

void Map::Load()
{
	backGraph             = LoadGraph("img/MapBack.png");
	intermediateStarGraph = LoadGraph("img/Star1.png");
	farStarGraph          = LoadGraph("img/Star2.png");
	cautionGraph          = LoadGraph("img/Caution.png");
	frameGraph            = LoadGraph("img/MapFrame.png");
}

void Map::Init()
{
	// �e�摜�T�C�Y����
	GetGraphSize(backGraph, &backW, &backH);
	GetGraphSize(intermediateStarGraph, &intermediateStarW, &intermediateStarH);
	GetGraphSize(farStarGraph, &farStarW, &farStarH);
	GetGraphSize(cautionGraph, &cautionW, &cautionH);
	// ��(�ߋ���)+�w�i�F������
	back1X = 0;
	back2X = WINDOW_WIDTH;
	backY  = 150;
	// ��(������)������
	intermediateStar1X = 0;
	intermediateStar2X = WINDOW_WIDTH;
	intermediateStarY  = 150;
	// ��(������)������
	farStar1X = 0;
	farStar2X = WINDOW_WIDTH;
	farStarY  = 150;
	// �x����������
	cautionX  = 0;
	caution1Y = 150;
	caution2Y = 150 + 780;
	// �t���[��������
	frameX = 0;
	frameY = 0;
	// �X�N���[���X�s�[�h������
	scrollSpeed1 = SCROLL_SPEED1;
	scrollSpeed2 = SCROLL_SPEED2;
	scrollSpeed3 = SCROLL_SPEED3;
}

void Map::Scroll()
{
	// ��(�ߋ���)+�w�i�F�̃X�N���[���X�s�[�h��ݒ�
	back1X -= scrollSpeed1;
	back2X -= scrollSpeed1;
	// ��(������)�̃X�N���[���X�s�[�h��ݒ�
	intermediateStar1X -= scrollSpeed2;
	intermediateStar2X -= scrollSpeed2;
	// ��(������)�̃X�N���[���X�s�[�h��ݒ�
	farStar1X -= scrollSpeed3;
	farStar2X -= scrollSpeed3;
	// �x�����̃X�N���[���X�s�[�h��ݒ�
	caution1Y -= scrollSpeed3;
	caution2Y -= scrollSpeed3;
}

void Map::Draw()
{
	// ��(�ߋ���)+�w�i�F�̕`��
	DrawGraph(back1X, backY, backGraph, TRUE);
	DrawGraph(back2X, backY, backGraph, TRUE);
	if (back1X + backW == 0)
	{
		back1X = WINDOW_WIDTH;
	}
	if (back2X + backW == 0)
	{
		back2X = WINDOW_WIDTH;
	}
	// ��(������)�̕`��
	DrawGraph(intermediateStar1X, intermediateStarY, intermediateStarGraph, TRUE);
	DrawGraph(intermediateStar2X, intermediateStarY, intermediateStarGraph, TRUE);
	if (intermediateStar1X + intermediateStarW == 0)
	{
		intermediateStar1X = WINDOW_WIDTH;
	}
	if (intermediateStar2X + intermediateStarW == 0)
	{
		intermediateStar2X = WINDOW_WIDTH;
	}
	// ��(������)�̕`��
	DrawGraph(farStar1X, farStarY, farStarGraph, TRUE);
	DrawGraph(farStar2X, farStarY, farStarGraph, TRUE);
	if (farStar1X + farStarW == 0)
	{
		farStar1X = WINDOW_WIDTH;
	}
	if (farStar2X + farStarW == 0)
	{
		farStar2X = WINDOW_WIDTH;
	}
	// �x�����̕`��
	DrawGraph(cautionX, caution1Y, cautionGraph, TRUE);
	DrawGraph(cautionX, caution2Y, cautionGraph, TRUE);
	if (caution1Y + cautionH == 150)
	{
		caution1Y = 930;
	}
	if (caution2Y + cautionH == 150)
	{
		caution2Y = 930;
	}
	// �t���[���̕`��
	DrawGraph(frameX, frameY, frameGraph, TRUE);
}