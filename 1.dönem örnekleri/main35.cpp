#include <iostream>
using namespace std;


int main()
{
	
	int i,sayi,poztop=0,negtop=0;
	
	for (i=0;i<6;i++)

	{
		
		cout<<"sayi giriniz:";
		cin>>sayi;
		
		
		
		
		if(sayi>0)
		{
			poztop=poztop+sayi;
		}
		
		else if (sayi<0)
		{
			negtop=negtop+sayi;
		}
		
		else {
		
			break;
			}
		
			
	}
	
	
	cout<<"pozitiflerin toplami:"<<poztop<<endl;
	cout<<"negatiflerin toplami:"<<negtop<<endl;

	return 0;
}
