#include"DxLib.h"
#include"UI.h"

void UI::Load()
{
    graphBlackOut  = LoadGraph("img/BlackOut.png");
    lostLifeGraph  = LoadGraph("img/LostLife.png");
}

void UI::Init()
{
    mode1X   =  671.0f;
    mode2X   =  864.0f;
    mode3X   = 1057.0f;
    modeAllY =  981.0f;
    lostLife1X = 132.0f;
    lostLife2X = 188.0f;
    lostLife3X = 244.0f;
    lostLifeAllY = 980.0f;
}

void UI::Draw()
{
    DrawString(100, 50,
        "������@�F���L�[�ňړ��ASPACE�L�[�Œe���ˁAZ,X,C�Ŏ��@�̒e��ύX�ł���(Z:Normal�AX:Penetrate�AC:Missile)�����[�h�ɂ���ė^����_���[�W���قȂ�\n�~�T�C���q�b�g���ɔ��j�G�t�F�N�g��t����\��",
        GetColor(255, 255, 255));
}