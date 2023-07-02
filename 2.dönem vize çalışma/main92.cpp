#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
	char metin[50];
	int i;
	cout<<" ad soyad gir";
	gets(metin);
	
	for(i=strlen(metin)-1; i>0 ;i--)
	{
		cout<<metin[i];
	}

	return 0;
	
}
