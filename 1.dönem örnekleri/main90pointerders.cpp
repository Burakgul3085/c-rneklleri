#include <iostream>
using namespace std;

int main()
{
	
	int sayilar[]={55,66,77,88,99,18};
	int *ptr=sayilar;
	
	cout<<"1.elemani="<<*ptr;
	ptr++;
	cout<<"2. elemani= "<<*ptr;
	cout<<"3.elemni="<<*(ptr+3);
	ptr--;
	cout<<"1.elemani= "<<*ptr;
	
	
	
	
	
	
	
	return 0;
}
