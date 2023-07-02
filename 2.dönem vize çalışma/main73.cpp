#include <iostream>
using namespace std;
#define mak 10

void fonk(int *pdzi);
void fonk(int *pdizi)
{
	int i;
	

	for(i=0;i<mak;i++)
		cout<<pdizi[i]+(mak+2)<<" ";
	cout<<endl;


		for(i=0;i<mak;i++)
	cout<<pdizi[i]+(mak*4)<<" ";

}

int main()
{
	
	int dizi[mak];
	int i;
	for(i=0;i<mak;i++)
	{
		dizi[i]=i+1;
		cout<<dizi[i]<<" ";
	}
	
	cout<<endl;
	fonk(dizi);
	
	return 0;
	
}
