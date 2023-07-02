#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	int tutulansayi=rand()%100+1;
	int tahmin=0;
	int denemesayi=0;
	int x=0;
	
	while(x!=1)
	{
		
		cout<<" 1 ile 100 arasinda sayi giriniz:";
		cin>>tahmin;
		
		if(tahmin<1 || tahmin>100)
		{
			cout<<" yanlis girdin yarram";
			continue;
		}
		
		if(tahmin<tutulansayi)
		{
			cout<<" yukari"<<endl;
			denemesayi++;
		}
		
		if(tahmin>tutulansayi)
		{
			cout<<" asagi"<<endl;
			denemesayi++;
		}
		
		if(tahmin==tutulansayi)
		{
			cout<<" tebrikler askim = "<< denemesayi <<" adet deneme sonucu buldun :";
			break;
		}
		
	
		
		
	}

	return 0;
}
