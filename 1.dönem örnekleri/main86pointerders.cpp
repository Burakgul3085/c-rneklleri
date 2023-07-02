#include <iostream>
using namespace std;

int main()
{
	
	int i[5]={1,2,3,4,5};
	int *ptr;
	ptr=i;
	
	cout<<"i= "<<&i<<endl;
	cout<<"ptr= "<<ptr;
	cout<<"ptr adresindeki deger ="<<*ptr;
	ptr++;
	
	
	cout<<"ptr = " <<ptr;
	cout<<"ptr adresindeki deger= "<<*ptr;
	ptr++;
	
	cout<<"ptr= "<<ptr;
	cout<<"ptr adresindeki deger= "<<*ptr;
	
	
	
	
	
	return 0;
}
