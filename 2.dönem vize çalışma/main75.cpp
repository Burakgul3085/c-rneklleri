#include <iostream>
using namespace std;

#define topla(x,y) x+y
#define cikar(x,y) x-y
#define carp(x,y) x*y
#define bol(x,y) x/y

int main()
{
	
	float sayi1,sayi2;
	char islem;
	
	cout<<" ilk sayiyi gir:";
	cin>>sayi1;
	cout<<"ikinci sayiyi gir:";
	cin>>sayi2;
	cout<<"islem seciniz(+,-,*,/)";
	cin>>islem;
	
if(islem=='+')
cout<<"toplam="<<topla(sayi1,sayi2);
else if(islem=='-')
cout<<"fark="<<cikar(sayi1,sayi2);
else if(islem=='*')
cout<<"carp="<<carp(sayi1,sayi2);
else if(islem=='/')
cout<<"bolum="<<bol(sayi1,sayi2);
else 
cout<<"siktir git";

	return 0;
	
}
