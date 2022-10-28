#include"DxLib.h"
#include"Back.h"
#include"Common.h"

void Back::LoadTitle()
{
    title.backGraph       = LoadGraph("img/Title.png");
    title.pressEnterGraph = LoadGraph("img/PressEnterKey.png");
}

void Back::InitTitle()
{

    title.backX = 0;
    title.backY = 0;

    title.pressEnterX = 690;
    title.pressEnterY = 600;
}

void Back::DrawTitle()
{
    DrawGraph(title.backX, title.backX, title.backGraph, TRUE);
    DrawGraph(title.pressEnterX, title.pressEnterY, title.pressEnterGraph, TRUE);
}
