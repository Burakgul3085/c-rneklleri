#include <iostream>
#include <cstring>

using namespace std;


int main()
{
	
	char metin[80];
	cout<<" bir metin giriniz:";
	
	gets(metin);
	
	
	int uzunluk =strlen(metin);
	
	cout<<"girdiginiz metindeki karakter uzunlu�u"<<uzunluk;
	
	
	
	
	
	return 0;
	
}
