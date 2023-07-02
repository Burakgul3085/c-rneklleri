#include <iostream>
using namespace std;

int main()
{
	
	int sayi,toplam=0;
	
	do{
		
		
		
		cout<<"bir sayi giiriniz:";
		cin>>sayi;
		toplam=toplam+sayi;
	
	}
	
	while(sayi!=0);
	
	cout<<"toplam="<<toplam;
	

	return 0;
}
