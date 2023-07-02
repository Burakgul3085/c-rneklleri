#include <iostream>
#include <string.h>

using namespace std;



struct ogrenci{
	
	char *ad;
	int numara;
	
	
	
};


int main()
{
	
	ogrenci dizi[3];
	dizi[0].ad="ali";
	dizi[0].numara=10;
	dizi[1].ad="veri";
	dizi[1].numara=20;
	dizi[2].ad="melii";
	dizi[2].numara=30;
	
	
	
	int i;
	for(i=0;i<3;i++)
	{
		cout<<"ogrenci "<<i<<endl<<"------------------------------------"<<endl;
		cout<<"adi="<<dizi[i].ad<<endl;
		cout<<"numarasi="<<dizi[i].numara<<endl;
	}
	
	return 0;
	
}
