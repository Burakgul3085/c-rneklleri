#include <iostream>
using namespace std;

int main()
{
	int sayi,toplam=0;
	do{
		
		cout<<"bir sayi giriniz:";
		cin>>sayi;
		toplam=toplam+sayi;
		
	}
	while(sayi!=0);
	
	cout<<"sayilarin toplami:"<<toplam;
	
	
	
	
	
	
	return 0;
}
