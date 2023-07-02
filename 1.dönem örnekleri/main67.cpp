#include <iostream>
using namespace std;


void mesaj();
void mesaj2();

int main()
{
	mesaj();
	cout<<"hosgeldiniz::";
	return 0;
}

void mesaj2()
{
	cout<<"algoritma";
	mesaj2();
	
}

void mesaj2()
{
	cout<<"ve programlam \n";
}
