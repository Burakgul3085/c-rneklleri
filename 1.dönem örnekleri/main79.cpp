#include <iostream>
using namespace std;

int faktoriyel(int gelensayi);
int faktoriyel(int gelensayi)
{
	int fakt=1;
	
	for(int i=1;i<=gelensayi;i++)
	{
		fakt=fakt*i;
		
	}
	return fakt;
}


int main()
{
	int sayi;
	cout<<"sayi giriniz: ";
	cin>>sayi;
	
	
	int sonuc=faktoriyel(sayi);
	cout<<"faktoriyeli= "<<sonuc;
	return 0;
	
	
	
	
}
