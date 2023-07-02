#include <iostream>
using namespace std;


int main()
{
	
	int sifre;
	cout<< "belirlemek istediginiz sifreyi giriniz:";
	cin>>sifre;
	
	
	cout<<"sifre tanimlandi :)\n ";
	
	
	int kullanicisifresorgu;
	
	cout<<"sifre nedir?";

	cin>>kullanicisifresorgu;
	
	if(kullanicisifresorgu==sifre)
	{
		cout<<"sifre dogru <3";
		
	}
	else
	{
		cout<<"sifre yanlis :(";
	}
	
	
	return 0;
}
