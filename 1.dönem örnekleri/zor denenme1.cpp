#include <iostream>


using namespace std;



int main()
{
	
	
	int boyut=5;
	float vize[boyut];
	float toplam=0,ort;
	
	
	
	for(int i=0;i<boyut;i++)
	{
		cout<<i<<".ci ogrencinin notuu gir:";
		cin>>vize[i];
		
	}
	
	
	for (int i=0;i<boyut;i++)
	{
		toplam=toplam+vize[i];
	}
	
	
	ort=toplam/boyut;
	
	cout<<"sinifin nor ortalamasi :";
	
	
	
	
	
	
	
	
	
	
	return 0;
}
