#include "BehavioralPattern.h"

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
}

void BehavioralPattern::Update(Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4)
{
    // ŽG‹›“G1
    enemy1.Move();
    enemy1.Hit();
    enemy1.Damaged();
    // ŽG‹›“G2
    enemy2.Move();
    enemy2.Hit();
    enemy2.Damaged();
    // ŽG‹›“G3
    enemy3.Move();
    enemy3.Hit();
    enemy3.Damaged();
    // ŽG‹›“G4
    enemy4.Move();
    enemy4.Hit();
    enemy4.Damaged();
}

void BehavioralPattern::Draw(Enemy1& enemy1, Enemy2& enemy2, Enemy3& enemy3, Enemy4& enemy4)
{
    enemy1.Draw();
    enemy2.Draw();
    enemy3.Draw();
    enemy4.Draw();
}