/*--------------------------------------------------------------
| âè04-04	  BayaSea
----------------------------------------------------------------*/
#include <iostream>
using namespace std;

//XÜNXè`
class Shop {
	int discount;		//ø¿ii~j

	//ø¿ivZiprF¿ijø¦QO
	void calcDiscount(int pr){ discount = (int)(pr * 0.8); }
public:
	void receivePrice(int pr) { calcDiscount(pr); }		//¿ió¯æè
	int getDiscount(){ return discount; }				//ø¿iæ¾
};
////////////////////////////////////////////////////////////////
int main()
{
	Shop* shopP(new Shop);

	shopP->receivePrice(1000);		//¿ióæè\bhÄÑoµ

	//ø¿iæ¾\bhÄÑoµ
	cout << "ø¿i=" << shopP->getDiscount() << endl;

	delete shopP;
	system("pause");
	return 0;
}
