#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
	
	char cumle[50];
	int i ,sayac=0;
	cout<<"metin giriniz:"<<endl;
	gets(cumle);
	
	cout<<"cumle disindaki karkaterler :";
	
	for(i=0;i<strlen(cumle);i++)
	{
		if(isalnum(cumle[i])==0)
		{
			sayac++;
			cout<<cumle[i];
			
		}
	
	}
	
	cout<<endl;
	cout<<"cumledeki toplam harf ve rakam olmayan karakter sayisi :"<<sayac;
	
	
	
	
	
	return 0;
	
}
