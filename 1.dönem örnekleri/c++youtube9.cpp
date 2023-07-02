#include <iostream>
using namespace std;

int main()
{
	
	int index=1;
	int max;
	cout<<"lutfen max degeri giriniz:";
	cin>>max;
	
	while (index <= max)
	{
		if(index % 7 ==0)
		{
			cout<<  index  <<" ";
		}
		index++;
	}
	
	
	return 0;
}
