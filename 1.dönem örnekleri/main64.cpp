#include <iostream>
using namespace std;
//parametre giriþi
int topla(int x,int y);

int main()
{
	int toplam;
	toplam=topla(10,15);
	cout<<"toplamlari="<<toplam;
	return 0;
}

//ekrana yazdýrma
int topla(int x,int y)
{
	int sonuc;
	sonuc=x+y;
	return sonuc;
}
