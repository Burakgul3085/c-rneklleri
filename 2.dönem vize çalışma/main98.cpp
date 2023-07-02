#include <iostream>
#include <cstring>
using namespace std;

class arabalar
{
string marka,model;
int yil;

public:
      
	   void arabaoku(string mrk, string mdl, int yl)
	   {
	   	marka=mrk;
	   	model=mdl;
	   	yil=yl;
	   	
		   }	
	
	void arabayaz()
	{
		cout<<"arabanin markasi :"<<marka<<endl;
		cout<<"arabanin modeli : "<<model<<endl;
		cout<<" arabain yili : "<<yil<<endl<<endl; 
	}
	
};

int main()
{
	
arabalar a1,a2,a3;

a1.arabaoku("opel","astra",2015);
a2.arabaoku("fiat","egea",2019);
a3.arabaoku("citroen","c5",2018);

a1.arabayaz();
a2.arabayaz();
a3.arabayaz();

	
	return 0;
}














