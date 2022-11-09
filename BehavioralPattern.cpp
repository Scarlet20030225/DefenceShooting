#include"DxLib.h"
#include"BehavioralPattern.h"

void BehavioralPattern::Load(Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4, Boss& boss)
{
    warningGraph = LoadGraph("img/Warning.png");
    enemy1.Load();
    enemy2.Load();
    enemy3.Load();
    enemy4.Load();
    boss.Load();
}

void BehavioralPattern::Init(Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4, Boss& boss)
{
    warningX = 0;
    warningY = 0;
    warningCounter = 0;
    enemy1.Init();
    enemy1.Init1();
    enemy1.Init2();
    enemy1.Init3();
    enemy1.Init4();
    enemy1.Init5();
    enemy1.Init6();
    enemy2.Init();
    enemy2.Init1();
    enemy2.Init2();
    enemy2.Init3();
    enemy2.Init4();
    enemy2.Init5();
    enemy2.Init6();
    enemy2.Init7();
    enemy3.Init();
    enemy3.Init1();
    enemy3.Init2();
    enemy3.Init3();
    enemy3.Init4();
    enemy4.Init();
    enemy4.Init1();
    enemy4.Init2();
    enemy4.Init3();
    enemy4.Init4();
    defetedEnemyNum = 0;

    boss.Init();
}

void BehavioralPattern::Update(Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4, Boss& boss)
{
    defetedEnemyNum = enemy1.defetedEnemy1Num + enemy2.defetedEnemy2Num + enemy3.defetedEnemy3Num + enemy4.defetedEnemy4Num;
    if (defetedEnemyNum >= 0)
    {
        enemy1.Move6();
        enemy2.Move();
        enemy2.Move1();
        enemy2.Move2();
    }
    if (defetedEnemyNum >= 2)
    {
        enemy1.Move();
        enemy3.Move();
        enemy3.Move1();
    }
    if (defetedEnemyNum >= 4)
    {
        enemy1.Move1();
        enemy1.Move2();
        enemy4.Move();
    }
    if (defetedEnemyNum >= 6)
    {
        enemy2.Move3();
        enemy2.Move4();
        enemy2.Move5();
    }
    if (defetedEnemyNum >= 10)
    {
        enemy3.Move2();
        enemy3.Move3();
        enemy4.Move1();
        enemy4.Move2();
    }
    if (defetedEnemyNum >= 15)
    {
        enemy1.Move4();
        enemy1.Move5();
        enemy2.Move6();
        enemy2.Move7();
    }
    if (defetedEnemyNum >= 20)
    {
        enemy1.Move3();
        enemy3.Move4();
        enemy4.Move3();
        enemy4.Move4();
    }

    enemy1.Hit();
    enemy1.Damaged();
    enemy2.Hit();
    enemy2.Damaged();
    enemy3.Hit();
    enemy3.Damaged();
    enemy4.Hit();
    enemy4.Damaged();

    // ƒ{ƒX
    if (defetedEnemyNum >= 25)
    {
        boss.Move();
    }
    boss.Hit();
    boss.Damaged();
}

void BehavioralPattern::Draw(Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4, Boss& boss)
{
    boss.Draw();
    enemy1.Draw();
    enemy2.Draw();
    enemy3.Draw();
    enemy4.Draw();
    if (defetedEnemyNum < 25)
    {
        DrawBox(585, 100, 585 + (defetedEnemyNum * 30), 110, GetColor(255, 255, 0), true);
    }
    if (defetedEnemyNum >= 25)
    {
        DrawBox(585, 100, 585 + (boss.life * 5), 110, GetColor(255, 0, 0), true);
        if (warningCounter >= 0)
        {
            warningCounter++;
            if (warningCounter <= 20)
            {
                DrawGraph(warningX, warningY, warningGraph, TRUE);
            }
            if (warningCounter >= 30 && warningCounter <= 50)
            {
                DrawGraph(warningX, warningY, warningGraph, TRUE);
            }
        }
    }
    int color;
    color = GetColor(255, 255, 255);
    DrawFormatString(0, 0, color, "Œ‚”j”F%d", defetedEnemyNum);

}