#include <iostream>
using namespace std;

struct filmler
{
	char baslik[50];
	int yil;
	
};

void filmyaz(filmler film);
void filmyaz(filmler film)
{
	cout<<endl;
	cout<<"film adi :"<<film.baslik<<endl;
	cout<<"film yili:"<<film.yil<<endl;	
}

int main()
{
	filmler macera ,belgesel ;
	cout<<"macera film basligini giriniz:"<<endl;
	cin.getline(macera.baslik,50);
	cout<<"macera film yilini gir:";
	cin>>macera.yil;
	
	cin.ignore();
	
		
	cout<<"belgesel film basligini giriniz:"<<endl;
	cin.getline(belgesel.baslik,50);
	cout<<"belgesel film yilini gir:";
	cin>>belgesel.yil;
	
	filmyaz(macera);
	filmyaz(belgesel);
	
	
	
	
	
	return 0;
	
}



