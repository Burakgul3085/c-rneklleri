#include <iostream>
using namespace std;

int main(){
	
int a=500;
int *b;
b=&a;

cout<<"sonuc 1="<<*b<<endl;
cout<<"sonuc 2="<<++(*b)<<endl;
cout<<"sonuc 3="<<++(*b)<<endl;
cout<<"sonuc 4="<<--(*b)<<endl;

cout<<endl<<endl;


cout<<"sonuc 5="<<b<<endl;
cout<<"sonuc 6="<<++b<<endl;
cout<<"sonuc 7="<<++b<<endl;
cout<<"sonuc 8="<<--b<<endl;
	
	

	
	return 0;
}

