#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
	
	char cumle[100];
	int i;
	int sayac=0;
	cout<<" bir cumle giriniz:";
	gets(cumle);
	
	cout<<"cumledeki harf ve rakam  disindaki karakterler:"<<endl;
	for(i=0;i<strlen(cumle);i++)
	{
		if(isalnum(cumle[i])==0)
		{
			sayac++;
			cout<<cumle[i];
			
		}
		
	}
	
	cout<<endl;
	cout<<"toplam"<<sayac<<" adet ";
	
	
	
	
	
	return 0;
}
