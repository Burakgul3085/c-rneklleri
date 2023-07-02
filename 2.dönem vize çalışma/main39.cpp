#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	
	
	char adsoyad[20];
	cout<<" isminizi giriniz:";
	gets(adsoyad);
	char *ptr;
	ptr=adsoyad;
	int i;
	
	
	for(i=0;i<=strlen(adsoyad)-1;i++)
	{
		cout<<ptr[i];
		
	}
	
	cout<<endl;
	
	for(i=strlen(adsoyad)-1;i>=0;i--)
	{
		cout<<ptr[i];
	}
	
	
	
	
	return 0;
	
}
