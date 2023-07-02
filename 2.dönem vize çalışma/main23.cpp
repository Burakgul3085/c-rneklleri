#include <iostream>
using namespace std;

void kutuciz(int satir , int sutun);
void kutuciz(int satir, int sutun)
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

int main()
{
	kutuciz(5,30);
	return 0;
}
