#include <iostream>
using namespace std;


int main()
{
	int sayi,fak=1;
	
cout<<"fak alinacak sayiyi giriniz:";
cin>>sayi;

                for(int n=1;n<=sayi;n++)
                {
                	fak=fak*n;
				}
	
	
	cout<<"fak:"<<fak;
	
	
	
	return 0;
}
