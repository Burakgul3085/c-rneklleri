#include <iostream>
using namespace std;

int main()
{
	
	int boyut =5;
	int vize[boyut];
	int toplam=0,ort;
	
	for(int i=0;i<boyut;i++)
	{
		cout<< i <<"ci ogrencinin notunu gir: ";
		cin>>vize[i];
		
	}
	
	for(int i=0;i<boyut;i++)
	{
		toplam=toplam+vize[i];
		
	}
	
	
	ort=toplam/boyut;
	cout<<"s�n�fn ortalamas�i:"<<ort;
	
	
	return 0;
	
}
