#include <iostream>
using namespace std;


int main()
{
	int sayi1,sayi2,secilenislem,sonuc;
	cout<<"birinci sayiyi giriniz:";
	cin>>sayi1;
	cout<<"ikinci sayiyi giriniz:";
	cin>>sayi2;
	
	
	cout<<"yapmak istediginiz islem nedir: (1:+,2:-,3:*,4:/)";
	cin>>secilenislem;
	
if (secilenislem==1)
{
	sonuc=sayi1+sayi2;
}
	else if (secilenislem==2)
	{
		sonuc=sayi1-sayi2;
	}
	
	else if(secilenislem==3)
	{
		sonuc=sayi1*sayi2;
	}
	
	else if(secilenislem==4)
	{
		sonuc=sayi1/sayi2;
	}
	
	else {
		cout<<"lütfen 1 ile 4 arasinda bir deger giriniz.";
		
	}
	
	cout<<"secilen islem:"<<sonuc;
	return 0;
}
