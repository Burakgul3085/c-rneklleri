#include <iostream>
using namespace std;


int main()
{
	
int i[5]={1,2,3,4,5};
int *ptr;
ptr=i;
cout<<"i= "<<&i;
cout<<"ptr= "<<ptr;
cout<<" *ptr adresimdeki deger = "<<*ptr;
cout<<" (ptr+2) un adresi= "<<(ptr+2)<<endl;
cout<<"*(ptr+2) adresimdeki deeger= "<<*(ptr+2) ;
cout<<"ptr[2] adresindeki degr= "<<ptr[2];

	
	
	
	
	return 0;
}
