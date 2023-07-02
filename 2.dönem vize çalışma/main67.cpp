#include <iostream>
using namespace std;
#define eger(i,j) if(i>j)
#define degilse else 
#define yaz cout
#define oku cin
#define sik return
int main()
{
	
	int a,b;
	yaz<<" a sayisini gir :";
	oku>>a;
	yaz<<" b sayisini gir:";
	oku>>b;
	
	eger(a,b)
	yaz<<" a daha buyuk";
	degilse
	yaz<<"b daha buyuk";
	
	
	
	
	
	sik  0;
}
