#include <iostream>
#include <string.h>
using namespace std;
#define stringata(s1,s2) strcpy(s1,s2)
#define stringbirles(s1,s2) strcat(s1,s2)
#define boyut 50

int main()
{
	
	char dizi[boyut];
	stringata(dizi,"mtu");
	cout<<dizi<<endl;
	
	stringbirles(dizi,"mtu bolumu h.o");
	cout<<dizi<<endl;
	
	
	
	return 0;
}
