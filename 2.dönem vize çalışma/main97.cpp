#include <iostream>
#include <cstring>
using namespace std;

class personeller
{
	char personelad[20],personelsoyad[20];
	int yas;
	
	public:
		void arsiv(char *padi,char*psoyad,int sayi)
		{
			strcpy(personelad,padi);
			strcpy(personelsoyad,psoyad);
			yas=sayi;
		}
	
	void goruntule()
	{
		cout<<" personel adi :"<<personelad<<endl;
		cout<<" personel soyad :"<<personelsoyad<<endl;
		cout<<" personel yas:"<<yas<<endl;
		
	}
	

}pers1,pers2,pers3;

int main()
{
	pers1.arsiv("ali","ak",22);
	pers2.arsiv("veli","demir",25);
	pers3.arsiv("tahir","vural",33);
	
	
	pers1.goruntule();
	pers2.goruntule();
	pers3.goruntule();
	
	return 0;
}






