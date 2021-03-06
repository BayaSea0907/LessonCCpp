//templateMethod（interfaceクラス使用）
//処理の流れ自体は同じだが、その具体的な中身の実装が異なる場合に使う
//例えば、「前処理」「本処理」「後処理」に分けられるとき、
//処理の流れを１つの枠組み（＝テンプレート）としてinterfaceクラスとして定義する。
//そして、interfaceクラスを継承した派生クラスにおいて、具体的に実装する処理を
//定義する。
//
//継承した派生クラスに「実装」する処理がない場合や、デフォルトの処理がある場合は、
//interfaceクラスの仮想メソッドを純粋仮想メソッドで定義しない
//
//このtemplateMethodパターンを使うと、
//main関数では、それぞれの生成オブジェクトの具体的な処理内容は一切わかっていないが、
//それぞれの生成オブジェクトは、templateMethodパターンクラスCProcBaseに定義した、
//処理の流れの順番通りに処理されていることがわかる。
//つまり、具体的な処理手順を意識させることなく、定義した処理手順で処理を
//が実行させることができる利点がある。
//
//interfaceクラスに定義した一連処理手順メソッドでは、それぞれの派生クラスのメソッドから
//falseが返されると、その時点でその処理を打ち切らせることができる。
//逆に、trueが返されると、interfaceのメソッドでその処理に関連する処理を引き続いて
//実行させることができる。

//templateMethod01(normal).cpp
//Concert 「よってらっしゃい　みてらっしゃい」
//Concert 「祭」
//実装した前処理後の処理
//Concert 「ありがとう」
//実装した後処理後の処理

//Game opennning
//実装した前処理後の処理
//Game playing
//実装した本処理後の処理
//Game closing
//実装した後処理後の処理


#include <iostream>
using namespace std;

//一連の処理の流れを定義したクラス----------------------------------
///////////////////////////////////////////////////////////////////////
//templateMmethod　interfaceクラス定義
//すべての処理が、派生クラスで「実装」される
class CProcBase
{
	//�A派生クラスの実装メソッド�Bで上書きされる（実装される）
	virtual bool FrontProc(){ return true; }
	virtual bool MainProc(){ return true; }
	virtual bool EndProc(){ return true; }
public:
	//�@ここに定義した処理の順番に、仮想メソッドを呼び出す
	void processFlowList(CProcBase* pflP)
	{
		//前処理
		if( pflP->FrontProc() )	//�Aの仮想メソッドを呼び出す
		{
			//falseが返ってきた場合
			cout << "実装した前処理後の処理" << endl;
		}
		//本処理
		if( pflP->MainProc() )		//�Aの仮想メソッドを呼び出す
		{
			//falseが返ってきた場合
			cout << "実装した本処理後の処理" << endl;
		}
		//後処理
		if( pflP->EndProc() )		//�Aの純粋仮想メソッドを呼び出す
		{
			//falseが返ってきた場合
			cout << "実装した後処理後の処理" << endl;
		}
	}
};
///////////////////////////////////////////////////////////////////////

//一連の実装処理クラス生成---------------------------------------------
///////////////////////////////////////////////////////////////////////
//コンサート処理クラス定義
class Concert : public CProcBase {
	//前処理
	bool FrontProc()
	{
		cout << "Concert 「よってらっしゃい　みてらっしゃい」" << endl;
		return false;
	}
	//本処理
	bool MainProc()
	{
		cout << "Concert 「祭」" << endl;
		return true;
	}
	//後処理
	bool EndProc()
	{
		cout << "Concert 「ありがとう」" << endl;
		return true;
	}
};
//------------------------------------------------------------------
//Game処理クラス定義
class Game : public CProcBase {
	//前処理
	bool FrontProc()
	{
		cout << "Game opennning" << endl;
		return true;
	}
	//本処理
	bool MainProc()
	{
		cout << "Game playing" << endl;
		return true;
	}
	//後処理
	bool EndProc()
	{
		cout << "Game closing" << endl;
		return true;
	}
};
//-----------------------------------------------------------------------

///////////////////////////////////////////////////////////////////////
int main()
{
	CProcBase* concertP(new Concert);
	CProcBase* gameP(new Game);

	//それぞれの一連の処理を実行する
	concertP->processFlowList(concertP);	//コンサート
	cout << endl;
	gameP->processFlowList(gameP);			//ゲーム

	delete concertP;
	delete gameP;

	return 0;
}
