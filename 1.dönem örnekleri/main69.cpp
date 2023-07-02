#include <iostream>
using namespace std;

void kutu(int satir, int sutun);


int main()
{
	
	kutu(5,30);
	return 0;
	
}

void kutu(int satir, int sutun)
{
	int i,j;
	for(i=1;i<=satir;i++)
	{
		for(j=1;j<=sutun;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}




