#include <iostream>
using namespace std;

class kup{
	int sayi;
	public:
		kup()
		{
			sayi=5;
		}
		
		friend inline int kupal();
		
}k;

int kupal()
{
	return k.sayi*k.sayi*k.sayi;
}

int main()
{
	cout<<"kup="<<kupal()<<endl;
	return 0;
}
