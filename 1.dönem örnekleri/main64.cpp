#include <iostream>
using namespace std;
//parametre giri�i
int topla(int x,int y);

int main()
{
	int toplam;
	toplam=topla(10,15);
	cout<<"toplamlari="<<toplam;
	return 0;
}

//ekrana yazd�rma
int topla(int x,int y)
{
	int sonuc;
	sonuc=x+y;
	return sonuc;
}
