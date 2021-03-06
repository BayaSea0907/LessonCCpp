/*
課題番号　：L12-4
内容　　　：整数値を２つ入力して、双方を四則演算＋−＊／した結果を表示する。
　　　　　　ただし、四則演算結果をそれぞれの変数に代入して表示するものとする。
ファイル名：L12-04.cpp
作成日　　：2015/04/13
作成者　　：1BayaSea
*/

//実行時に確認すること：
//□整数値５と３を割り算（／）すると、商（１）のみ（小数点以下は切り捨てられる）が表示されることを
//　確認しなさい。
//A.しました

//□分子用の変数に0を入力したとき、割り算（／）はどうなるでしょうか？
//A.0になりました。

//□分母用の変数に0を入力したとき、割り算（／）はどうなるでしょうか？
//A.アプリケーションが止まって終了しました。存在する数を0で割ったら答えが出せない。

#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	int num1;		//入力用
	int num2; 		//入力用
	int wa;			//和用
	int sa;			//差用
	int seki;		//積用
	int syo;		//商用

	cout << "整数値を２つ入力（例　100 200）>> ";
	cin >> num1 >> num2;		//整数値の入力

	//四則演算結果をそれぞれの変数に代入
	wa = num1 + num2;		//和計算
	sa = num1 - num2;		//差計算
	seki = num1 * num2;		//積計算
	syo = num1 / num2;		//商計算

	//四則演算結果を格納している変数を使って計算結果を表示
	cout << "足した結果=" << wa << endl;
	cout << "引いた結果=" << sa << endl;
	cout << "掛けた結果=" << seki << endl;
	cout << "割った結果=" << syo << " ←小数点以下切捨て確認しました。" << endl;		//小数点以下は表示されません

	_getch();
	return 0;
}
