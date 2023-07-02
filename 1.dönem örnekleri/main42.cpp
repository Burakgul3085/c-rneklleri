#include <iostream>
using namespace std;

int main()
{

int sayi,i,mod;
cout<<"bir sayi giriniz:";
cin>> sayi;




	
	int asko=1;
	for(i=2;i<sayi;i++)
	{
		mod=sayi%i;
	if(mod==0)
	{
		asko=0;
	}
}
	if(asko==1)
	cout<<"asal";
	else
	cout<<"asal degil";  
	
	
	
	
	return 0;
}
