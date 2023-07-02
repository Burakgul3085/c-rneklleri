#include <iostream>
using namespace std;

int main()
{
	
	int boyut=10;
	int grafik[boyut]={19,5,14,5,6,7,2,3,7,2};
	int i,j;
	
	for(i=1;i<=boyut-1;i++)
	{
		
		cout<< i <<".ci eleman ="<<grafik[i]<< "\t---";
		
		
		for(j=1;j<=grafik[i];j++)
		{
			cout<<"*";
		}
		cout<<endl;
		
	}
	
	
	
	
	
	
	return 0;
	
}
