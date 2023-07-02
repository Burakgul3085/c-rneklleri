#include <iostream>
using namespace std;
#define mesaj1 " bir sayi giriniz:"
#define kat 5

int main()
{
	
	int sayi,sonuc;
	cout<<mesaj1;
	cin>>sayi;
	sonuc=sayi*kat;
	cout<<"girdiginiz sayinin "<< kat <<" kati ="<<sonuc<<endl;
	
	cout<<mesaj1;
	cin>>sayi;
	cout<<"girdiginiz sayinin "<< kat << " kati="<<sayi*kat<<endl;
	
	
	return 0;
	
}
