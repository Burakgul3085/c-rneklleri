#include <iostream>
using namespace std;
#define dongu(i,son,kacar) for(i=0;i<=son;i=i+kacar)
int main()
{
	int i,son,kacar;
	cout<<"dongu kaca kadar gitsin:";
	cin>>son;
	cout<<"dongu kacar artsin";
	cin>>kacar;
	dongu(i,son,kacar)
{
   cout<<i;
	cout<<endl;
}
	
	
	return 0;
}
