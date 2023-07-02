#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
int main()
{
	char metin[50];
	int i;
	cout<<" adini gir:";
	gets(metin);
	
	for(i=0;i<strlen(metin);i++)
	{
		metin[i]=toupper(metin[i]);
		
	}
	
	cout<<" ismin buyuk hali"<<metin;

	return 0;
}
