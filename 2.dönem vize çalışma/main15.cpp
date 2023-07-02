#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	
	char metin1[30],metin2[20];
	
	strcpy(metin1,"ali");
	strcpy(metin2,"veli");
	
	if(strcmp(metin1,metin2))
	{
		cout<<"metinler farkli";
		
	}
	else 
	{
		cout<<"metinler ayni";
			}
	
	
	
	
	
	return 0;
}
