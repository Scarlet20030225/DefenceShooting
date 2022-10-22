#include"DxLib.h"
#include"Time.h"

void Time::Init()
{
    nowCount = prevCount = GetNowHiPerformanceCount();
    float fixedDeltaTime = 1.0f / 60.0f; // 60分の1秒 = 0.01666...秒
    float waitFrameTime  = 15500;        // 16000マイクロ秒 = 16ミリ秒 = 0.016秒
}

void Time::Measurement()
{
    //deltaTime計測
    nowCount  = GetNowHiPerformanceCount();
    deltaTime = (nowCount - prevCount) / 1000000.0f;
}

void Time::FrameProcess()
{
    // 1フレームの処理が終わったので、現在の時刻は1フレーム前の時刻になる
    prevCount = nowCount;
}
