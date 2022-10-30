#include"DxLib.h"
#include"BehavioralPattern.h"

void BehavioralPattern::Load(Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4)
{
    enemy1.Load();
    enemy2.Load();
    enemy3.Load();
    enemy4.Load();
}

void BehavioralPattern::Init(Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4)
{
    enemy1.Init();
    enemy2.Init();
    enemy3.Init();
    enemy4.Init();
    defetedEnemyNum = 0;
}

void BehavioralPattern::Update(Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4, Boss& boss)
{
    // �G���G1
    enemy1.Move();
    enemy1.Hit();
    enemy1.Damaged();
    // �G���G2
    enemy2.Move();
    enemy2.Hit();
    enemy2.Damaged();
    // �G���G3
    enemy3.Move();
    enemy3.Hit();
    enemy3.Damaged();
    // �G���G4
    enemy4.Move();
    enemy4.Hit();
    enemy4.Damaged();
    defetedEnemyNum = enemy1.defetedEnemy1Num + enemy2.defetedEnemy2Num + enemy3.defetedEnemy3Num + enemy4.defetedEnemy4Num;
}

void BehavioralPattern::Draw(Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4)
{
    enemy1.Draw();
    enemy2.Draw();
    enemy3.Draw();
    enemy4.Draw();

    int color;
    color = GetColor(255, 255, 255);
    DrawFormatString(0, 0, color, "���j���F%d", defetedEnemyNum);
}