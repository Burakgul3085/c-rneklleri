#include <iostream>
using namespace std;

int main()
{
	
	int dizi[3][4];
	int i,j,sifirsayi=0;
	
	// matrise sayi girme 
	
	for ( i=0;i<3;i++)
	{
		for( j=0;j<4;j++)
		{
			cout<<i<<".ci satirin "<<j<<".ci sutunun giriniz";
			cin>>dizi[i][j];
		}
	}
	
	// matrisi ekrana yazdýrma
	
	for (i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<dizi[3][4];
		}
		cout<<endl;
	}
	
	// matristeki sifirlarýn yeri
	
	for (i=0;i<3;j++)
	{
		for(j=0;j<4;j++)
		{
			if (dizi[i][j]==0)
			{
				sifirsayi++;
				cout<<i<<" "<<j<<" de 0 var";
				
			}
		}
	}
	
	
	
	cout<<"toplam 0 sayisi = "<<sifirsayi;
	
	
	
	return 0;
}
