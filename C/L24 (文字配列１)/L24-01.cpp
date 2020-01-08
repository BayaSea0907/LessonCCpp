/*
課題番号　：L24-1
内容　　　：heroオブジェクトにヒーロー名"BERG"をchar型文字配列（要素数１０）に格納して、ヒーロ
　　　　　　ー名を表示する。
　　　　　　文字配列にはヒーロー名の１文字ずつを格納する。
　　　　　　for文を使って１文字ずつ表示して、最後に必ず改行する。
　　　　　　繰返し制御は、文字数で行う。
　　　　　　格納と表示は、オブジェクトで行う。
ファイル名：L24-01.cpp
作成日　　：2015/12/10
作成者　　：BayaSea
*/

//プログラムを書き換えて確認すること：
//□オブジェクトを宣言した後すぐにshowメソッドを呼び出すと正しく表示されません。
//　文字配列の各要素が不定値であることを確認しなさい。
//　（　hero.setName();　をコメントにする　）
//A.確認しました  ﾌﾌﾌﾌと表示される
//□showメソッドの繰り返しを10回行うと正しく表示されないことを確認しなさい。。
//A.確認しました
//□ヒーロー名を"DORONJO"に書き換えて正しく表示させようとすると、繰り返し制御を（i < ７）に書き
//　換えなければならないことを確認しなさい。
//A.確認しました

#include <conio.h>
#include <iostream>
using namespace std;

//ヒーロークラス定義
class Hero {
	char name[10];			//ヒーロー名格納用文字配列
public:
	//ヒーロー名設定　1文字ずつ格納
	void setName(){
		name[0] = 'B';		//１文字ずつ代入
		name[1] = 'E';
		name[2] = 'R';
		name[3] = 'G';
	}

	//ヒーロー名表示　１文字ずつ表示
	void show(){
		for (int i = 0; i < 4; i++){
			cout << name[i] ;
		}
		cout << endl;
	}
};
////////////////////////////////////////////////////////////
int main()
{
	Hero hero;
	
	hero.setName();		//ヒーロー名設定メソッド呼び出し
	hero.show();		//ヒーロー名表示メソッド呼び出し

	_getch();
	return 0;
}

