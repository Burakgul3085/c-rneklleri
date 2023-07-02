#include <iostream>
using namespace std;

int main()
{
	int sayi=558;
	cout<<"degisken degeri="<<sayi<<endl;
	cout<<" degisken adresi="<<&sayi<<endl;
	cout<<endl;
	
	int *ptr=&sayi;
	cout<<" pointeerin gosterdigi adres:"<<ptr<<endl;
	cout<<"pointeerin gosterdigi adres degeri:"<<*ptr<<endl;
	cout<<"pointeer adresi :"<<&ptr;
	
	return 0;
	
}
