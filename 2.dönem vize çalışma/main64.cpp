#include <iostream>
using namespace std;
#define dongu(i,bas,son) for(i=bas;i<=son;i++)
int main()
{
	int i,bas,son;
	cout<<"dongu hangi sayidan baslasin: ";
	cin>>bas;
	cout<<"dongu hangi sayida bitsin:";
	cin>>son;
	
	dongu(i,bas,son)
	cout<<i<<" ";
	
	
	
	
	
	
	return 0;
}
