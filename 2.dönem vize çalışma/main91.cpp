#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
	
	char cumle[80];
	int i;
	cout<<" cumle giriniz:";
	gets(cumle);
	
	for(i=0;i<strlen(cumle);i++)
	{
		
		if( islower(cumle[i])!=0)
		{
			cumle[i]=toupper(cumle[i]);
			
		}
		else
		{
			
			cumle[i]=tolower(cumle[i]);			
		}		
	}
	
	
	cout<<cumle;
	
	
	
	return 0;
	
}
