#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
	
	char metin[50];
	int i,bosluksayi=0;
	strcpy(metin," mtu bil . muh . bolum ");
	
	for(i=0;i<strlen(metin);i++)
	{
		
		if(isspace(metin[i])==0)
		{
			cout<<metin[i]<<" = bosluk deil"<<endl;
			
			
		}
		else
		{
			cout<<metin[i]<<" =bosluk "<<endl;
			bosluksayi++;
		}
		
		
		
		
	}
	cout<<"toplam ="<<bosluksayi<<" bosluk var ";
	
	

	return 0;
}
