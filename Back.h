#pragma once

class Back
{
public:
	/// <summary>
	/// �^�C�g���摜�ǂݍ���
	/// </summary>
	void LoadTitle();
	/// <summary>
	/// �^�C�g��������
	/// </summary>
	void InitTitle();
	/// <summary>
	/// �^�C�g���`��
	/// </summary>
	void DrawTitle();

private:
	struct Title
	{
		int graph;
		int x, y;
	};
	Title title;
};