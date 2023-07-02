#include <iostream>
#include <string.h>
using namespace std; 
#define stringata(s1,s2)  strcpy(s1,s2)
#define stringbirlestir(s1,s2)  strcat(s1,s2)
#define boyut 50

int main()
{
	char dizi[boyut];
	stringata(dizi,"mtu");
	cout<<dizi<<endl;
	stringbirlestir(dizi," bilgisayar muhendisligi bolumu");
	cout<<dizi<<endl;
	
	
	
	
	return 0;
}
