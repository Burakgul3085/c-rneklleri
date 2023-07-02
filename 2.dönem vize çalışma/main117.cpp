#include <iostream>
#include <cstring>
using namespace std;

class isciler{
	private :
		
		string ad,soyad;
		int calistigisaat,saatlikucret;
		int aylikmaas;
		
		public:
			
			void bilgigir()
			{
				cout<<"isci adi :"<<endl;
				cin>>ad;
								cout<<"isci soyadi :"<<endl;
								cin>>soyad;

			                     	cout<<"isci saatlik ucret :"<<endl;
			                     	cin>>saatlikucret;

			                              	cout<<"isci calistigi saat:"<<endl;
			                              	cin>>calistigisaat;

			                                            	}

	int maas()
	{
		aylikmaas=calistigisaat*saatlikucret;
	}
	void goster()
	{
		cout<<"iscinin ad: "<<ad <<endl;
		cout<<"iscinin soyadi: "<<soyad <<endl;
		cout<<"iscinin saatlik ucreti: "<<saatlikucret<<endl;
		cout<<"iscinin calistigisaati: "<<calistigisaat<<endl;
		yorum(maas());
	}
	void yorum (int aylik)
	{	
		if(aylik>2800)
		cout<<" isci asgari ucretten fazla aliyor "<<endl;
		else
		cout<<" asgari ucretten az aliyor "<<endl;
	}
};


int main()
{
	isciler isci1,isci2;
	
	isci1.bilgigir();
	cout<<"--------------------"<<endl;
	isci2.bilgigir();
	cout<<"--------------------"<<endl;
	
	cout<<"iscilerin bilgieri :"<<endl;
	isci1.goster();
	cout<<"----------------------"<<endl;
	isci2.goster();

	return 0;
}





