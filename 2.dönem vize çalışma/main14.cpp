#include <iostream>
#include <cstring>
using namespace std;



int main()
{
	
	
	char metin1[30],metin2[20];
	cout<<"birinci metni giriniz:";
	gets(metin1);
	
	
	cout<<"ikinci metni giriniz:";
	gets(metin2);
	
	
	strcat(metin1,metin2);
	cout<<metin1;
	

	return 0;
}
