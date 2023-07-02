#include <iostream>
using namespace std;

int main()
{
	
	int dizi[3][4];
	int i,j,sifirsayi=0;
	
	//matrise sayi girme
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<< i << ".ci satirin"<<j<<".ci sutununu gir: ";
			cin>>dizi[3][4];
			
		}
	}
	
	// matrisi ekrana yazýrma 
	
		for(i=0;i<3;i++)
		{
			for(j=0;j<4;j++)
			{
				cout<<dizi[3][4]<<" ";
				
			}
			cout<<endl;
			
		}
	

	
	return 0;
	
}
