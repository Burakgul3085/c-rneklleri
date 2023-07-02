#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
	char metin[50];
	int i;
	cout<<"bir metin giriniz:";
	gets(metin);
	
	for(i=0;i<strlen(metin);i++)
	{
		if(isalnum(metin[i])==0)
		cout<<metin[i]<< " : rakam ya da harf deildir";
		else
		cout<<metin[i]<<" : rakam yada harf ";
		
	}
	
	
	
	
	
	
	return 0;
}
