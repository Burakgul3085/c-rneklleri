#include <iostream>
#include <cstring>
using namespace std;

class isciler
{
private :
string ad,soyad;
int saatucret,calistigisaat	;
int aylikmaas;

public:
	void bilgigir()
	{
		cout<<" iscnini adi :";
		cin>>ad;
		cout<<"iscinini soyadi :";
		cin>>soyad;
		cout<<"iscinin 1 saatlik ucreti :";
		cin>>saatucret;
		cout<<"iscinin 1 ayda kac saat calistigini gir:";
		cin>>calistigisaat;
	
	}
	
	int maas()
	{
		return aylikmaas=saatucret*calistigisaat;
		
	}
	
	void goster()
	{
		cout<<"iscinin adi:"<<ad<<endl;
		cout<<"iscinin soyadi:"<<soyad<<endl;
		cout<<"iscinin maasi:"<<maas()<<endl;
		yorum(maas());
	
	}
	
	void yorum(int aylik)
	{
		if(aylik>2500)
		cout<<"maas asgari ucretin ustu"<<endl;
		else
		cout<<"maas asgari ucretin altinda"<<endl;
	}	
};

int main()
{
	isciler isci1,isci2;
	isci1.bilgigir();
	cout<<"------------------------"<<endl;
	isci2.bilgigir();
	cout<<"----------------------------"<<endl;
		
	cout<<"iscilerin bilgileri"<<endl<<endl;
	
	isci1.goster();
	cout<<"---------------------------"<<endl;
	isci2.goster();
	
	
	return 0;
}






