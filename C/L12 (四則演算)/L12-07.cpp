/*
課題番号　：L12-7
内容　　　：入力した２つの整数値を割り算して、小数点以下の値も表示する。
ファイル名：L12-07.cpp
作成日　　：2015/05/13
作成者　　：BayaSea
*/

//プログラムを実行して確認すること：
//□整数値100と100を入力すると、小数点以下の0も表示されることを確認しなさい。
//→確認しました

//プログラムを書き換えて確認すること：
//□cout.setf(ios::showpoint);　をコメントにすると、割り切れた場合（例　100と100を入力）に
//　は、有効数字の整数部のみ（例では　1のみ）が表示されることを確認しなさい。
//→確認しました

#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	int num1; 		//入力用
	int num2; 		//入力用

	cout << "整数値を２つ入力（例　100 200）>> ";

	cin >> num1 >> num2;

	cout.setf(ios::showpoint); 		//小数点以下の表示指定


	//変数どうしを割り算した結果の表示
	cout << "割った実数結果=" << (double)num1/num2 << endl;

	_getch();
	return 0;
}
