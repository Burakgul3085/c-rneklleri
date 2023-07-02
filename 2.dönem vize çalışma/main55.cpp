#include <iostream>
using namespace std;


struct ogrenci
{
	char adsoyad[50];
	float vize;
	float final;
	
};

void ortabul(ogrenci gelen);
void ortabul(ogrenci gelen)
{
	float ort;
	cout<<"ogrenci adi:"<<gelen.adsoyad<<endl;
	ort=gelen.vize*0.4+gelen.final*0.6;
	cout<<"ortalamasi="<<ort<<endl;

}

int main()
{
	ogrenci dizi[3];
	int i;
	for(i=0;i<3;i++)
	{
		cout<<i<<" ci ogrencinin adi soyadi :";
		cin.getline(dizi[i].adsoyad,50);
		cout<<i<<" ci ogrencinin vize notu:";
		cin>>dizi[i].vize;
		cout<<i<<" ci ogrencinin final notu:";
		cin>>dizi[i].final;
		cin.ignore();
			}
			
			for(i=0;i<3;i++)
			ortabul(dizi[i]);
	
	
	return 0;
}

