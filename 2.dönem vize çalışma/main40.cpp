#include <iostream>
#include <string.h>

using namespace std;

struct calisan
{
	char ad[20],soyad[20];
	int yas;
	
}kisi;


int main()
{
	
	strcpy(kisi.ad,"ahmet");
	strcpy(kisi.soyad,"demir");
	kisi.yas=25;
	
	cout<<"calisan adi="<<kisi.ad<<endl;
	cout<<"calisan soyad="<<kisi.soyad<<endl;
	cout<<"yasi="<<kisi.yas<<endl;	
	
	
	
	
	
	
	
	
	
	return 0;
}
