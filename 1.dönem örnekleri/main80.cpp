#include <iostream>
using namespace std;


int topla(int bas,int son);
int topla(int bas,int son)
{
	int toplam=0;
	
for(int i=bas;i<=son;i++)
{
	toplam=toplam+i;
	
}
	return toplam;
	
	
}


int main()
{
	int baslangic,bitis;
	cout<"baslangic degeri giriniz= ";
	cin>>baslangic;
	
	cout<<"bitis degeri giriniz=";
	cin>>bitis;
	
	
	int sonuc=topla(baslangic,bitis);
	cout<<"toplami=" <<sonuc;
	
	return 0;
	
	
}
