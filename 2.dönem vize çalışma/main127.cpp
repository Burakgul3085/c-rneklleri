#include <iostream>
using namespace std;

void faktoriyel(int &);


int main()
{
	
	int x;
	
	cout<<"faktoriyel alinacak sayiyi griniz:";
	cin>>x;
	
	faktoriyel(x);
	cout<<"sayinin faktoriyeli:"<<x<<endl;
	
	
	return 0;
}

void faktoriyel(int &b)
{
	int fk=1;
	int i;
	
	for(i=1;i<=b;i++)
	{
		fk=fk*i;
	}
	b=fk;
}
