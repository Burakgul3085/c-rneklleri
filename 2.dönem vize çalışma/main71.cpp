#include <iostream>
using namespace std;

struct filmler
{
	char baslik[50];
	int yil;
};

void filmyaz(filmler film);

int main()
{
	filmler macera ,belgesel;
	cout<<" macera film basligini giriniz:"<<endl;
	cin.getline(macera.baslik,50);
	cout<<"filmin yilini giriniz:";
	cin>>macera.yil;
	
	
	cin.ignore();
	
    cout<<"belgesel film ismini giriniz:";
    cin.getline(belgesel.baslik,50);
    cout<<"belgesel film yilini giriniz:";
    cin>>belgesel.yil;
    
    filmyaz(macera);
    filmyaz(belgesel);
    
	
	
	return 0;
	
}
void filmyaz(filmler film)
{
	cout<<endl;
	cout<<"filnmin basligi:"<<film.baslik<<endl;
	cout<<"filmin yili :"<<film.yil<<endl;
	
}
