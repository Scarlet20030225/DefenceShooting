#include"GameManager.h"

Player player;
Enemy1 enemy1;
Enemy2 enemy2;
Enemy3 enemy3;
Enemy4 enemy4;
BehavioralPattern behavioralPattern;
Boss boss;
PlayerShot playerShot[SHOT_NUM];
BossShot bossShot[SHOT_NUM];
Shot shot;
Back back;
BaseEdurance baseEdurance;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    GameInit(player, enemy1, enemy2, enemy3, enemy4, behavioralPattern, boss, playerShot, bossShot, shot, back, baseEdurance);
    Loop(player, enemy1, enemy2, enemy3, enemy4, behavioralPattern, boss, playerShot, bossShot, shot, back, baseEdurance);

    return 0;
}