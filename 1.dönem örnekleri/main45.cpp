#include <iostream>
using namespace std;




int main()
{
	
int dizi[10];
int i, kontrol=-1;

for ( i=0;i<10;i++)
{
	cout<<i<<".ci sayiyi giriniz:";
	cin>>dizi[i];
	
	if(dizi[i]==0)
	{
		break;
	}
	
	kontrol =i;
	
	}	
	
	
	
	for( i=0;i<=kontrol;i++)
	{
		cout<<i<<".ci eleman girdiniz:"<<dizi[i];
	}
	

	return 0;
}
