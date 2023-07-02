#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
	
	char metin;
	
	metin='t';
	if(islower(metin)==0)
	cout<<metin<<"=kucuk harf deil "<<endl;
	else 
	cout<<metin<<" = kucuk harf "  ;
	
		metin='A';
	if(islower(metin)==0)
	cout<<metin<<"=kucuk harf deil "<<endl;
	else 
	cout<<metin<<" = kucuk harf ";
	
	
		metin='B';
	if(islower(metin)==0)
	cout<<metin<<"=kucuk harf deil "<<endl;
	else 
	cout<<metin<<" = kucuk harf ";
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
