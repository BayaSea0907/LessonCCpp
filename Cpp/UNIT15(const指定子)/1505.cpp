/*----------------------------------------------------------------
 問題15-05	2016.10.6

 15CU0210 BayaSea
------------------------------------------------------------------*/
#include <iostream>
#include <memory>
using namespace std;

//店舗クラス定義
class Shop {
	mutable int num = 0;		//個数

	int addNum(int an)const{ return an + an; }
public:
	void setNum(int sn)const{ num = addNum(sn); }
	int getNum()const{ return num; }
};
///////////////////////////////////////////////////////////////////
//オブジェクトを生成するテンプレート外部関数
template<class X>
shared_ptr<X> create(){ return (shared_ptr<X>)(new X); }
///////////////////////////////////////////////////////////////////
int main()
{
	shared_ptr<const Shop> const sh_shop(create<Shop>());

	sh_shop->setNum(100);
	cout << "個数=" << sh_shop->getNum() << endl;
	return 0;
}

