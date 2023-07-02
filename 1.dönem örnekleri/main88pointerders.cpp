#include <iostream>
using namespace std;

int main()
{
	int a=500;
	int *b;
	b=&a;
	
	cout<<"adres a= "<<b;
	cout<<"adres a+1 "<<b+1;
	cout<<" adres a-1"<<b-1;
	cout<<endl<<endl;
	
	
	
	cout<<"deger a="<<*b;
	cout<<"deger a+1="<<*b+1;
	cout<<"deger a-1= "<<*b-1;
	
	
	
	
	
	return 0;
	
}
