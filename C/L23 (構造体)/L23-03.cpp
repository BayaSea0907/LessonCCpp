/*
課題番号　：L23-3
内容　　　：heroオブジェクトにヒーロー名とアイテム構造体配列（要素数２）を格納して、ヒーロー名とア
　　　　　　イテム構造体のメンバを表示する。
　　　　　　アイテム構造体のメンバは、アイテム名と能力。
　　　　　　繰返し制御は行わない。
　　　　　　格納と表示はオブジェクトで行う。
ファイル名：L23-03.cpp
作成日　　：2015/11/19
作成者　　：BayaSea
*/

#include <string>		//文字列操作用
#include <conio.h>
#include <iostream>
using namespace std;

//アイテム構造体の定義
struct Item {
	string name;	//アイテム名
	int power;		//能力
};

//ヒーロークラス定義
class Hero {
	string name;		//ヒーロー名
	Item item[2];		//アイテム構造体配列
public:
	//ヒーロー名設定
	void setName(){
		name = "BERG";
	}
	//アイテム設定
	void setItem(){
		item[0].name = "mant";
		item[0].power = 50;
		item[1].name = "sword";
		item[1].power = 200;
	}
	//ヒーロー名、アイテム表示
	void show(){
		cout << name << endl;

		for (int i = 0; i < 2; i++){
			cout <<	item[i].name << " " <<	item[i].power << endl;
		}
	}
};
////////////////////////////////////////////////////////////
int main()
{
	Hero hero;

	hero.setName();	//ヒーロー名設定メソッド呼び出し
	hero.setItem();	//アイテム設定メソッド呼び出し
	hero.show();	//ヒーロー名、アイテム表示メソッド呼び出し

	_getch();
	return 0;
}

