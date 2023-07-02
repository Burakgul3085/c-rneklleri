#include <iostream>
using namespace std;

int main()
{
	
	int bas,son,toplam=0;
	cout<<" bas gir:";
	cin>>bas;
	cout<<"son gir:";
	cin>>son;
	
	for(int i=bas; i<=son;i++)
	{
		toplam=toplam+i;
	}
	
	
	cout<<"toplamlarý:"<<toplam;
	
	
	return 0;
}
