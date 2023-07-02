#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
	char metin[50];
	int i;
	cout<<" ad soyad giriniz:";
	gets(metin);
	
	for(i=0;i<strlen(metin);i++)
	{
		if(isupper(metin[i])==0)
		cout<<metin[i]<<" = buyuk harf deil"<<endl;
		else
		cout<<metin[i]<<" =buyuk harf"<<endl;
	
	}
	

	return 0;
	
}
