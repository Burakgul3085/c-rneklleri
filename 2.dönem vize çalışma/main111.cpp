#include <iostream>
using namespace std;

inline int dikdortgen(int sayi1,int sayi2)
{
	int alan=sayi1*sayi2;
	return alan;
}

int main()
{
	int uzun,kisa;
	
	cout<<"kisa kenari giriniz:";
	cin>>kisa;
	cout<<"uzun kenri gir:";
	cin>>uzun;
	
	cout<<"dikdortgnin alani:"<<dikdortgen(kisa,uzun)<<endl;
	
	
	
	
	
	
	
	
	return 0;
}
