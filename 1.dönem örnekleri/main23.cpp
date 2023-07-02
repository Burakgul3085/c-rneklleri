#include <iostream>
using namespace std;
int main()
{
	int i,sayi,poztop=0,negtop=0;
	
	for(int i=1;i<=6;i++){
	
	cout<<" sayilari giriniz:";
	cin>>sayi;
	
	
	
if(sayi>0)
{
	poztop=poztop+sayi;
}
	else if(sayi<0)
	{
		negtop=negtop+sayi;
	}
	else 
	{
		break;
	}
	
	
	}
	
	
	cout<<"poztoplarin toplami:"<<poztop;
	cout<<"negtoplarin toplami:"<<negtop;
	return 0;
}
