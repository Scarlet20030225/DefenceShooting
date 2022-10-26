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
        "操作方法：矢印キーで移動、SPACEキーで弾発射、Z,X,Cで自機の弾を変更できる(Z:Normal、X:Penetrate、C:Missile)※モードによって与えるダメージが異なる\nミサイルヒット時に爆破エフェクトを付ける予定",
        GetColor(255, 255, 255));
}