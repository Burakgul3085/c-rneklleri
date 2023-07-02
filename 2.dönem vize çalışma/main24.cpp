#include <iostream>
using namespace std;

void diziyaz(int x[],int n);
void diziyaz(int x[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<x[i];
	}
}


int main()
{
	
	int dizi[5]={4,5,6,7,8};
	diziyaz(dizi,5);
	
	return 0;
}
