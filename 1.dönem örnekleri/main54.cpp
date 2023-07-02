#include <iostream>
using namespace std;


int main()
{
	
	
int dizi[10];
int sayac=0;

for (int i=0;i<10;i++)
{
	cout<<i<<".ci sayiyi giriniz:";
	cin>>dizi[i];
	
	}	
	
	for(int i=0;i<10;i++)
	{
		if (dizi[i]<0)
		{
			sayac++;
			
		}
	}
	
	
	cout<<"girilen negatif sayia adedi =="<<sayac;
	
	
	
	
	
	return 0;
}
