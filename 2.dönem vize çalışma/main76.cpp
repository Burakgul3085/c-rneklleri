#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
	
	char metin;
	
	metin='b';
	if(isalpha(metin)==0)
	cout<<metin<<"= harf deil"<<endl;
	else 
	cout<<metin<<" =harftir "<<endl;
	
	metin='7';
	if(isalpha (metin)==0)
	cout<<metin<<" = harf deildir"<<endl;
	else
	cout<<metin<<" =harftir"<<endl;
	
	metin= ' ';
	if(isalpha(metin)==0)
	cout<<metin<<"= harf deildir"<<endl;
	else 
	cout<<metin<<" = harftir"<<endl;
	

	return 0;
	
}
