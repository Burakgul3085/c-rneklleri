#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	
	
	char metin1[30],metin2[30];
	strcpy(metin1,"algoritma \t");
	strcpy(metin2,"programlama");
	
	strcat (metin1,metin2);
	cout<<metin1;
	

	
	return 0;
}
