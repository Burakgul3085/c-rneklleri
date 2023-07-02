#include <iostream>
#include <cstring>
using namespace std;

class isciler{
	
	private :
		string ad,soyad;
		int saatlikucret,calistigisaat;
		int aylikmaas;
		
		public:
			
			void bilgigir()
			{
			cout<<"iscinin adini gir:"<<endl;
			cin>>ad;
			cout<<"isciinin soyadini gir:"<<endl;
			cin>>soyad;
			cout<<"isicinin 1 saatlik uvreti :"<<endl;
			cin>>saatlikucret;
			cout<<"1 iscinin 1 ayda kac saat calistigini yazini:"<<endl;
			cin>>calistigisaat;
				
			}
	
	
	int maas()
	{
		aylikmaas=saatlikucret*calistigisaat;
	}
	
	
	void goster()
	{
		cout<<"iscinin adi :"<<ad<<endl;
		cout<<"iscinin soyadi :"<<soyad<<endl;
		cout<<"iscinini maasi :"<<maas()<<endl;
		yorum(maas());
		
	}
	
	void yorum (int aylik)
	{
		if(aylikmaas>2200)
		cout<<"maas asgari ucretten fazla :";
		else
		cout<<"maas asgari ucretten azdir:";
	}
};


int main()
{
	
	isciler isci1,isci2;
	

     isci1.bilgigir();
	cout<<"-----------------------"<<endl;
	 isci2.bilgigir();
	 cout<<"----------------------"<<endl;
	 
	 cout<<"iscilerin bilgileri"<<endl;
	 
	 isci1.goster();
	 cout<<"---------------"<<endl;
	 isci2.goster();
	 
	
	
	
	
	return 0;
}
