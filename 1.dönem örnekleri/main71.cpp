#include <iostream>
using namespace std;


int fakt(int gelensayi);

int main()
{
	int sayi;
	cout<<"sayi giriniz:";
	cin>>sayi;
	int sonuc=fakt(sayi);
	cout<<"faktoriyeli="<<sonuc;
	return 0;
	
	
}


int fakt(int gelensayi){
	int fakt=1;
	for(int i=1;i<=gelensayi;i++)
	{
		fakt=fakt*i;
	}
	return fakt;
}

