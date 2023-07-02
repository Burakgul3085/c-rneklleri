#include <iostream>
#include <cstring>
using namespace std;

class personeller{
	
	char personelad[50],personelsoyad[50];
	int yas;
	
	public:
		void arsiv(char *padi, char *psoyadi, int sayi)
		{
			strcpy(personelad,padi);
			strcpy(personelsoyad,psoyadi);
			yas=sayi;
			
		}
	
	void goruntule()
	{
		cout<<"personel adi:"<<personelad<<endl;
		cout<<"personel soy adi :"<<personelsoyad<<endl;
		cout<<"personel yasi:"<<yas<<endl<<endl;
	}	
}pers1,pers2,pers3;;


int main()
{
	pers1.arsiv("ali","yilmaz",27);
	pers2.arsiv("mehmet","gul",41);
	pers3.arsiv("burak","gul",19);
	
	pers1.goruntule();
	pers2.goruntule();
	pers3.goruntule();
	
	
	
	
	return 0;
}
