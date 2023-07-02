#include <iostream>
using namespace std;

int main()
{
	
	int sayi,sonuc=1;
	
	cout<<" faktaoriyel alinacak sayiyi giriniz:";
	cin>>sayi;
	
	for(int i=1;i<=sayi;i++)
	{
		sonuc=sonuc*i;
	}
	
	
	cout<<"faktoriyeli= "<<sonuc;
	
	
	
	
	
	return 0;
}
