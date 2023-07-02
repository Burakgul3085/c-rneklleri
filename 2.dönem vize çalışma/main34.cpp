#include <iostream>
using namespace std;
int main()
{
	int i[5]={1,2,3,4,5};
	int *ptr;
	ptr=i;
	
	cout<<"i="<<&i<<endl;
	cout<<"ptr="<<ptr<<endl;
	cout<<"*ptr adresindeki deger="<<*ptr<<endl;
	cout<<"(ptr+2) un adresi="<<(ptr+2)<<endl;
	cout<<"*(ptr+2) adresindeki deger="<<*(ptr+2)<<endl;
	cout<<"ptr[2] afresindeki degr="<<ptr[2];
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
