#include "DxLib.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int){
	ChangeWindowMode(TRUE); // �E�B���h�E���[�h�ɐݒ�
	DxLib_Init();   // DX���C�u��������������

	int Handle;     // �f�[�^�n���h���i�[�p�ϐ�
	Handle = LoadGraph("�摜/04.png"); // �摜�����[�h
	DrawGraph(50, 100, Handle, TRUE); // �f�[�^�n���h�����g���ĉ摜��`��

	WaitKey();     // �L�[���͂�����܂őҋ@
	DxLib_End();   // DX���C�u�����I������
	return 0;
}