#include"DxLib.h"
#include"Back.h"
#include"Common.h"

void Back::LoadTitle()
{
    title.backGraph       = LoadGraph("img/Title.png");
    title.star1Graph      = LoadGraph("img/TitleStar1.png");
    title.star2Graph      = LoadGraph("img/TitleStar2.png");
    title.pressEnterGraph = LoadGraph("img/PressEnterKey.png");
}

void Back::InitTitle()
{
    GetGraphSize(title.star1Graph, &title.star1W, &title.star1H);
    GetGraphSize(title.star2Graph, &title.star2W, &title.star2H);

    title.backX = 0;
    title.backY = 0;

    title.pressEnterX = 690;
    title.pressEnterY = 600;

    title.starY = 0;

    title.star11X = 0;
    title.star12X = WINDOW_WIDTH;

    title.star21X = 0;
    title.star22X = WINDOW_WIDTH;
    // スクロールスピード初期化
    title.scrollSpeed1 = SCROLL_SPEED1;
    title.scrollSpeed2 = SCROLL_SPEED2;
}

void Back::Scroll()
{
    title.star11X -= title.scrollSpeed1;
    title.star12X -= title.scrollSpeed1;

    title.star21X -= title.scrollSpeed2;
    title.star22X -= title.scrollSpeed2;
}

void Back::DrawTitle()
{
    DrawGraph(title.backX, title.backX, title.backGraph, TRUE);

    DrawGraph(title.star11X, title.starY, title.star1Graph, TRUE);
    DrawGraph(title.star12X, title.starY, title.star1Graph, TRUE);
    if (title.star11X + title.star1W == 0)
    {
        title.star11X = WINDOW_WIDTH;
    }
    if (title.star12X + title.star1W == 0)
    {
        title.star12X = WINDOW_WIDTH;
    }

    DrawGraph(title.star21X, title.starY, title.star2Graph, TRUE);
    DrawGraph(title.star22X, title.starY, title.star2Graph, TRUE);
    if (title.star21X + title.star2W == 0)
    {
        title.star21X = WINDOW_WIDTH;
    }
    if (title.star22X + title.star2W == 0)
    {
        title.star22X = WINDOW_WIDTH;
    }

    DrawGraph(title.pressEnterX, title.pressEnterY, title.pressEnterGraph, TRUE);
}
