#include <iostream>
using namespace std;

int topla(int a,int b){
	return a+b;
	}
	
	int getir(    int(*fint)(int,int)  )
	{
		int a=fint(10,10);
		return a;
	}
	
	int main()
	{
		int b=getir(topla);
		cout<<b;
		
	}
