#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
	
	char metin[50];
	int i;
	strcpy(metin," BILGISAYAR BOLUMU MUH");
	cout<<metin<<endl;
	
	
	for(i=0;i<strlen(metin);i++)
	{
		metin[i]=tolower(metin[i]);
	}
	
	cout<<"metnin kucuk hali :"<<metin<<endl;
	
	
	
	
	
	
	
	
	
	
	return 0;
}
