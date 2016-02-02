#include "DxLib.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int){
	ChangeWindowMode(TRUE); // ウィンドウモードに設定
	DxLib_Init();   // DXライブラリ初期化処理

	int Handle;     // データハンドル格納用変数
	Handle = LoadGraph("画像/04.png"); // 画像をロード
	DrawGraph(50, 100, Handle, TRUE); // データハンドルを使って画像を描画

	WaitKey();     // キー入力があるまで待機
	DxLib_End();   // DXライブラリ終了処理
	return 0;
}