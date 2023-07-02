#include <iostream>
using namespace std;


int main()
{
	int boyut=10;
	int grafik[boyut]={11,25,37,45,5,6,7,8,9,10};
	int i,j;
	
	for(i=0;i<=9;i++)
	{
		cout<<i<<".ci eleman="<< grafik[i] << " \t -->";
			
		for ( j=1;j<=grafik[i];j++){
			cout<<"*";
		}
		cout<<endl;
	}
	

	return 0;
}
