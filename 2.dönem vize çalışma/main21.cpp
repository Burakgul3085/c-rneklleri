#include <iostream>
using namespace std;

void mesaj();
void mesaj2();


void mesaj()
{
	cout<<"algoritma";
	mesaj2();
}

void mesaj2()
{
	cout<<"ve programlama \n";
}


int main()
{
	mesaj();
	cout<<"hosgeldiniz:";
	
	
	return 0;
}
