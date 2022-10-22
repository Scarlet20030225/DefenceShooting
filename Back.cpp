#include"DxLib.h"
#include"Back.h"

void Back::LoadTitle()
{
    title.graph = LoadGraph("img/Title.png");
}

void Back::InitTitle()
{
    title.x = 0;
    title.y = 0;
}

void Back::DrawTitle()
{
    DrawGraph(title.x, title.y, title.graph, TRUE);
}
