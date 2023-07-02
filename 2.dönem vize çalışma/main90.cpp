#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
int main()
{
	char adres[1000];
	int i, harfsay=0,rakamsay=0,karaksay=0;
	cout<<"adres giriniz:"<<endl;
	gets(adres);
	
	for(i=0;i<strlen(adres);i++)
	{
		if(isalpha(adres[i])!=0)
		{
			harfsay++;
					}
		
		if(isdigit(adres[i])!=0)
		{
			rakamsay++;
					}
		if(isalnum(adres[i])!=0)
		{
			karaksay++;
		            }
		
	}
	
	cout<<endl<<endl;
	
	cout<<" adresinizde: "<<harfsay <<" adet harf "<< rakamsay <<" adet rakam"<< karaksay <<" adet ozel karakter vardir:";
	
	
	
	
	
	
	return 0;
	
}
