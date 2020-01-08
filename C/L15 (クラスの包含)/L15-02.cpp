/*
課題番号　：L15-2
内容　　　：テストの得点を判定する。
　　　　　　L15-1を書き換えて、testオブジェクトに得点を格納した後、得点が80点以上かどうかの判定結果を表示する。
　　　　　　判定は、得点が80点以上ならば”ＯＫ”と表示し、80点未満ならば何も表示しない。
　　　　　　得点入力はuiオブジェクトで行い、判定結果表示はtestオブジェクトで行う。
ファイル名：L15-02.cpp
作成日　　：2015/07/01
作成者　　：BayaSea
*/
//実行時に確認すること：
//□80点、100点を入力したとき、”ＯＫ”と表示されることを確認しなさい。
//A.しました。
//□79点、-10点を入力したとき、何も表示されないことを確認しなさい。
//A.しました。

#include <conio.h>
#include <iostream>
using namespace std;

//テストクラス定義
class Test {
	int ten;	//得点
public:
    //得点設定メソッド  sten：得点受取り用
	void setTen(int sten){
        ten = sten;
    }
    //得点判定メソッド
	void judgeTen(){

		//得点が80点以上かどうかを判別
		if(ten >= 80){
            cout << "ＯＫ" << endl;
        }
	}
};
////////////////////////////////////////////////////////////
//ユーザインタフェースクラス定義
class UI {
	Test test;		//テストオブジェクト宣言
public:
	//処理制御メソッド
	void processCtrl(){
		inpTest();		    //test入力設定
		test.judgeTen();	//得点判定
	}
	//test入力設定メソッド
	void inpTest(){
		int score; 		    //得点入力用

		cout << "得点を入力>> ";
		cin >> score;

		//得点設定メソッド呼び出し
		test.setTen(score);

	}
};
////////////////////////////////////////////////////////////////
int main()
{
	UI ui;			//ユーザインタフェースオブジェクト宣言

	ui. processCtrl();	//インタフェース処理制御

	_getch();
	return 0;
}
