#include <iostream>
using namespace std;


int main()
{
	int sayi=558;
	cout<<"degisken degeri:"<<sayi;
	cout<<"degisken adresi:"<<&sayi;
	cout<<endl<<endl;
	
	
	int *ptr=&sayi;
	cout<<"pointer ýn gosterdigi adres:"<<ptr;
	cout<<"pointer ýn gosyerdigi adres degeri:"<<*ptr;
	cout<<"pointer adresi:"<<&ptr;
	
	
	
	
	
	return 0;
	
}
