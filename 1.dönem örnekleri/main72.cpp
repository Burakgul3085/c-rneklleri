#include <iostream>
using namespace std;



int topla(int bas,int son);

int main()
{
	int bas,bitis;
	cout<<"baslangýc egri giriniz:";
	cin>>bas;
	cout<<"bitis degri gir:";
	cin>>bitis;
	
	int sonuc=topla(bas,bitis);
	cout<<"toplami="<<sonuc;
	return 0;
}


int topla(int bas,int son)
{
	int toplam=0;
	for(int i=bas;i<=son;i++)
	{
		toplam=toplam+i;
	}
	return toplam;
}
