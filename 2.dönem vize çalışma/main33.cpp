#include <iostream>
using namespace std;


int main()
{
	
	int i[5]={1,2,3,4,5};
	int *ptr;
	ptr=i;
	
	cout<<"i="<<&i<<endl;
	cout<<"ptr="<<ptr<<endl;
	cout<<"ptr adresindeki deger="<<*ptr<<endl;
	ptr++;
	cout<<"ptr="<<ptr<<endl;
	cout<<"ptr adresindeki degr ="<<*ptr<<endl;
	ptr++;
	cout<<"ptr="<<ptr<<endl;
	cout<<"ptr adresindeki deger="<<*ptr;
	
	
	
	
	
	
	
	
	return 0;
	
}
