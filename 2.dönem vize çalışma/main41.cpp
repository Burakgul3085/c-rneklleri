#include <iostream>
#include <string.h>
using namespace std;

struct calisan
{
	char *ad,*soyad;
	int yas;
};

int main()
{
	calisan kisi;
	kisi.ad="ahmet";
	kisi.soyad="gul";
	kisi.yas=25;
	
	cout<<"calisan adi="<<kisi.ad<<endl;
	cout<<"calisan soyad="<<kisi.soyad<<endl;
	cout<<"yasi="<<kisi.yas<<endl;
	
	
	
	
	
	
	
	return 0;
}
