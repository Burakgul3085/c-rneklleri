#include <iostream>
using namespace std;

int main()
{
	
	int okulno;
	int *b;
	okulno=453;
	
	cout<<"okulno="<<okulno<<endl;
	
		b=&okulno;
		cout<<"okulno= "<<okulno;
	*b=500;
	cout<<" \n\n okulno="<<okulno;
	
	
	
	
	
	
	
	
	return 0;
}
