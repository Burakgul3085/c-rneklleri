#include <iostream>
using namespace std;

struct ogrenci
{
	char adsoyad[50];
	float vize;
	float final;
	
};

void ortalamabul(ogrenci gelen);

void ortalamabul(ogrenci gelen)
{
	float ort;
	cout<<"ogrenci adi="<<gelen.adsoyad<<endl;
	ort=gelen.vize*0.4+gelen.final*0.6;
	cout<<"ortalamsi ="<<ort<<endl;
	
}


int main()
{
	ogrenci dizi[3];
	int i;
	for(i=0;i<3;i++)
	{
		cout<<i<<" ci ogrencinin adi soyadi :";
		cin.getline(dizi[i].adsoyad,50);
		cout<<i<<" ci ogrencinin vize notunun giriniz:";
		cin>>dizi[i].vize;
		cout<<i<<" ci ogrencinin final notu :";
		cin>>dizi[i].final;
		cin.ignore();
	}
	

	for(i=0;i<3;i++)
	
		ortalamabul(dizi[i]);
	

	
	return 0;
}
