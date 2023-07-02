#include <iostream>
using namespace std;
#define topla(x,y) x+y
#define cikar(x,y) x-y
#define carp(x,y)  x*y
#define  bol(x,y) x/y

int main()
{
	float sayi1,sayi2;
	char islem;
	cout<<"ilk sayi gir:";
	cin>>sayi1;
	cout<<" ikinci sayi gir:";
	cin>>sayi2;
	cout<<"islem gir: (+,-,*,/)";
	cin>>islem;
	
	if(islem=='+')
	cout<<"toplam="<<topla(sayi1,sayi2);
	else if (islem=='-')
	cout<<"fark ="<<cikar(sayi1,sayi2);
	else if(islem=='*')
	cout<<"carpým="<<carp(sayi1,sayi1);
	else if(islem=='/')
	cout<<"bolumu="<<bol(sayi1,sayi2);
	else
	cout<<"düzgün islem yap";
	
	
	
	
	return 0;
	
}
