#include <iostream>
using namespace std;


int main()
{
	
	int sayilar []={55,66,77,88,99,108};
	int *ptr=sayilar;
	
	cout<<"1.elemn:"<<*ptr<<endl;
	ptr++;
	cout<<"2.eleman :"<<*ptr<<endl;
	cout<<"5.eleman:"<<*(ptr+3)<<endl;
	ptr--;
	cout<<"1.eleman:"<<*ptr;
	
	
	
	
	
	
	
	return 0;
	
}
