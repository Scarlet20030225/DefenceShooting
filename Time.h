#pragma once

class Time
{
public:
	/// <summary>
	/// �^�C��������
	/// </summary>
	void Init();
	/// <summary>
	/// �^�C���v��
	/// </summary>
	void Measurement();
	/// <summary>
	/// �t���[���v��
	/// </summary>
	void FrameProcess();

private:
	LONGLONG nowCount, prevCount;
	float deltaTime;
};