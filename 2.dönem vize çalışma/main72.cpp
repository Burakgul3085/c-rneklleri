#include <iostream>
using namespace std;

struct ogrenci
{
	char isim[50];
	int vize;
	int final;
};


void ortabul(ogrenci gelen);
void ortabul(ogrenci gelen)
{
	float ort;
	cout<<" ogrencinin adi:"<<gelen.isim<<endl;
	ort=gelen.vize*0.4+gelen.final*0.6;
	cout<<" ortalamasi :"<<ort;
	
}

int main()
{
	
	
	ogrenci dizi[3];
	int i;
	
	
	for(i=0;i<3;i++)
	{
		cout<<i << "ogrencinin adi soaydi"<<endl;
		cin.getline(dizi[i].isim,50);
		cout<<i <<"ogrencinin vize notu:";
		cin>>dizi[i].vize;
		cout<<i <<"ogrencinin final notu:";
		cin>>dizi[i].final;
		cin.ignore();

		
	}
	
	for(i=0;i<3;i++)
	ortabul(dizi[i]);

	return 0;
	
}
