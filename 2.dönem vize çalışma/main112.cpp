#include <iostream>
using namespace std;

class deneme {
	int sayi;
	public:
		deneme()
		{
			sayi=12;
		}
		friend int sayifonk(deneme x);
}a;

int sayifonk(deneme x)
{
	return x.sayi;
}

int main()
{
	
	cout<<"sayi= "<<sayifonk(a);
	return 0;
}
