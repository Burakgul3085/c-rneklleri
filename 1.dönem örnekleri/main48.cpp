#include <iostream>
using namespace std;


int main()
{
	int boyut =5;
	int vize[boyut];
	int toplam=0, ort;
	
	for (int i=0;i<5;i++)
	{
		cout<<i<<".ci ogremcinin notunu giriniz:";
		cin>>vize[i];
		
	}
	
	for(int i=0;i<5;i++)
	{
		toplam=toplam+vize[i];
	}
	
	
	ort=toplam/boyut;
	cout<<"sinifin ortalamasýi :"<<ort;
	
	
	
	return 0;
}
