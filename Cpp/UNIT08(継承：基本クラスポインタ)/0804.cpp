//問題０８−０４	BayaSea
#include <iostream>
#include <string>
using namespace std;

//会社クラス定義
class Company {
    int* numP;
public:
    Company():numP(new int){}
	virtual ~Company() { delete numP; }		//virtual指定子を追加しました
};
////////////////////////////////////////////////////////
//店舗クラス定義
class Shop : public Company {
    int* numP;
public:
    Shop():numP(new int){}
	~Shop() { delete numP; }
};
////////////////////////////////////////////////////////
int main()
{
    Company* companyP(new Shop);

    delete companyP;
    return 0;
}
