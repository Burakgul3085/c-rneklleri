#include <iostream>
using namespace std;

int main()
{
	
	
int a[2][3]={4,1,5,            7,2,6};
int b[2][3]={1,3,4,             2,5,7};
int toplam[2][3];
int i,j;



cout<<"a matrisi \n\n";

for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
		cout<<a[i][j]<<" ";
	}
	cout<<endl;
}




cout<<"b matrisi \n\n";

for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
		cout<<b[i][j]<<" ";
	}
	cout<<endl;
}



cout<<" toplam matrisi \n\n";

for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
		toplam[i][j]=a[i][j]+b[i][j];
		cout<<toplam[i][j];
		
	}
	cout<<endl;
}
	
	
	return 0;
}
