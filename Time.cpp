#include"DxLib.h"
#include"Time.h"

void Time::Init()
{
    nowCount = prevCount = GetNowHiPerformanceCount();
    float fixedDeltaTime = 1.0f / 60.0f; // 60����1�b = 0.01666...�b
    float waitFrameTime  = 15500;        // 16000�}�C�N���b = 16�~���b = 0.016�b
}

void Time::Measurement()
{
    //deltaTime�v��
    nowCount  = GetNowHiPerformanceCount();
    deltaTime = (nowCount - prevCount) / 1000000.0f;
}

void Time::FrameProcess()
{
    // 1�t���[���̏������I������̂ŁA���݂̎�����1�t���[���O�̎����ɂȂ�
    prevCount = nowCount;
}
