#include <iostream>
using namespace std;


int main()
{
	
	int i[5]={1,2,3,4,5};
	int *ptr;
	ptr=i;
	cout<<"i= "<<&i;
	cout<<"ptr= "<<ptr;
	cout<<"ptr adresindeki deger = "<<*ptr;
	
	
	
	
	return 0;
}
