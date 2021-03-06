/*
課題番号　：L14-1
内容　　　：ヒーローheroオブジェクトのHPを設定した後、HPを表示する。
　　　　　　HPはheroオブジェクトのメソッドで代入し、HP表示用メソッドで表示するものとする。
ファイル名：L14-01.cpp
作成日　　：2015/06/10
作成者　　：BayaSea
*/

//実行時に確認すること：
//□heroオブジェクトの大事な情報であるHPが、インスタンス変数hpに格納されていることを確認しなさ
//　い。
//A.確認しました。hpに代入している数値を変えました。

//□heroオブジェクトが振舞う内容（HPの代入、表示）は、メソッドに定義されていることを確認しなさい。
//A.確認しました。HeroクラスのshowHpメソッド以外の方法で表示することは出来ない。

//□heroオブジェクトを振舞わせるには、メソッドを呼び出さなければならないことを確認しなさい。
//A.確認しました。heroを呼んだところで何をするのかわからない。

//プログラムを書き換えて確認すること：
//□メソッド呼び出しを、オブジェクト名．をつけないで書いたらどうなるでしょうか？
//	setHp();
//	show();
//A.確認しました。オブジェクトを通さずに別のクラスに手を出してはいけない。

//□setHpメソッドを呼び出す代わりに、次のような２通りで書いたらどうなるでしょうか？
//	hp = 100;
//	hero.hp = 100;
//A.hp = 100・・・変数hpはmain関数の中にはないのでエラーになる。
//A.hero.hp = 100・・・オブジェクトを呼び出ても、メソッドを通さずにオブジェクトの情報に手を出してはいけない。

#include <conio.h>
#include <iostream>
using namespace std;

//HEROクラス定義
class Hero {

	int hp;		//HP（インスタンス変数）

public:

	//HP格納メソッド
	void setHp(){
			hp = 100;		//インスタンス変数hpに100を代入
	}
	//HP表示メソッド
	void showHp(){
		cout << "HP=" << hp << endl;	//インスタンス変数hpの表示
	}
};

////////////////////////////////////////////////////////////


int main()
{
	Hero hero;		//ヒーローオブジェクト宣言

	hero.setHp();		//HP格納メソッドの呼び出し
	hero.showHp();		//HP表示メソッドの呼び出し

	_getch();
	return 0;
}
