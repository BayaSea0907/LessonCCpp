/*
課題番号　：L12-2
内容　　　：２つの整数型の変数のうち、片方の変数に200を代入した後、その変数の値と100を足した値を代入した
　　　　　　もう片方の変数の値を表示する。
ファイル名：L12-02.cpp
作成日　　：2015/04/13
作成者　　：BayaSea
*/

//実行時に確認すること：
//□L12-1と比較すると、実行結果は同じだが、200を代入した変数の値が変化していないことを確認しな
//　さい。

#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	int num;		//整数値格納用
	int wa;			//合計用

	//値の代入
	num = 200;
	
	//合計計算（変数numの値と100を足した合計を変数waに代入）
	wa = num + 100;

	//変数waに格納された結果を表示
	cout << "100を足した結果=" << wa << endl << endl;

	cout << "確認：numの数値 = " << num << endl;

	_getch();
	return 0;
}
