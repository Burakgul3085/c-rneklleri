#include <iostream>
using namespace std;

void diziyaz(int x[],int y);
void diziyaz(int x[],int y)
{
	for(int i=0;i<y;i++)
	{
		cout<<x[i]<<endl;
		
	}
}



int main()
{
	
	int dizi[5]={1,2,3,4,5};
	diziyaz(dizi,5);
	
	
	
	
	return 0;
}
