#include <iostream>
#include <cstring>

using namespace std;


int main()
{
	char isim[50];
	cout<<"isminizi giriniz: ";
	gets(isim);
	cout<<"isminizin karakterleri :";
	
	
	for(int i=0;i<=50;i++)
	{
		if(isim[i]=='\0')
		{
			break;
		}
		
		cout<<isim[i];
		
		
		
	}
	
	
	
	
	
	return 0;
	
}
