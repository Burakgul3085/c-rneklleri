#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
setlocale(LC_ALL,"Turkish")	;
char metin;

metin='3';
if(isdigit(metin)==0)
cout<<metin<<" = rakam deildir"<<endl;
else
cout<<metin<<" = rakamd�r"<<endl;


metin=' ';
if(isdigit(metin)==0)
cout<<metin<<" =rakam de�ildir";
else
cout<<metin<<"rakamd�r";



	
	
	return 0;
	
}
