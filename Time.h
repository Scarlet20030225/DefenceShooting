#pragma once

class Time
{
public:
	/// <summary>
	/// タイム初期化
	/// </summary>
	void Init();
	/// <summary>
	/// タイム計測
	/// </summary>
	void Measurement();
	/// <summary>
	/// フレーム計測
	/// </summary>
	void FrameProcess();

private:
	LONGLONG nowCount, prevCount;
	float deltaTime;
};