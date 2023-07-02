#include <iostream>
using namespace std;


int main()
{
	int sayi1,sayi2,sayi3,sonuc;
	
	cout<<"3 sayi giriniz:";
	cin>>sayi1>>sayi2>>sayi3;
	cout<<endl;
	
	if(sayi1>sayi2 && sayi1>sayi3)
	{
		sonuc=sayi1;
	}
	else if (sayi2>sayi1 && sayi2>sayi3)
	{
		sonuc=sayi2;
	}
	else
	{
		sonuc=sayi3;
	}
	
	cout<<"girilen en buyuk sayi:"<<sonuc;
	
	
	return 0;
}
