#include <iostream>
#include <cstring>
using namespace std;

// strrev kulllam-nmadan tersten yazdýrma
int main()
{
	
	char isim[30];
	cout<<"ad soyad gir: ";
	gets(isim);
	
	int uzunluk=strlen(isim);
	
	for(int i=uzunluk-1; i>=0;i--){
		cout<<isim[i];
		
	}
	
	
	
	
	
	return 0;
	
}
