#include <iostream>
using namespace std;

int faktor(int gelensayi);
int faktor(int gelensayi)
{
	int fkt=1;
	for(int i=1;i<=gelensayi;i++)
	{
		fkt=fkt*i;
	}
	return fkt;
}

int main()
{
	int sayi;
	cout<<"sayi giriniz: ";
	cin >>sayi;
	int sonuc = faktor(sayi);
	cout<<"faktoriyeli ="<<sonuc;
}
