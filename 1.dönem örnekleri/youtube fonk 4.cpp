#include  <iostream>
using namespace std;


void faktoriyel(int sayi){
	
	int fakt=1;
	for(int i=2;i<=sayi;i++)
	{
		fakt=fakt*i;
		
	}
	
	cout<<"faktoriyeli= "<<fakt;
	
}


int main()
{
	int sayi;
	cout<<"faktoriyel alinacak sayiyi giriniz= ";
	cin>>sayi;
	faktoriyel(sayi);
	
	return 0;
}
