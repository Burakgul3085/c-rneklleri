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
cout<<metin<<" = rakamdýr"<<endl;


metin=' ';
if(isdigit(metin)==0)
cout<<metin<<" =rakam deðildir";
else
cout<<metin<<"rakamdýr";



	
	
	return 0;
	
}
