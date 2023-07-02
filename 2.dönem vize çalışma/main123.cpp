#include <iostream>
using namespace std;

class zaman{
	int saat,dakika,saniye;
	public :
		
		friend void zamanal(int s, int dk, int sn);
		void goster()
		{
			cout<<"saat= "<<saat<<":"<<dakika<<":"<<saniye;
		}
}zmn;

void zamanal(int s, int dk, int sn){
	
	zmn.saat=s;
	zmn.dakika=dk;
	zmn.saniye=sn;
	
}

int main()
{
	
	int s,dk,sn;
	cout<<"saati giriniz:";
	cin>>s;
	cout<<"dakika giriniz:";
	cin>>dk;
	cout<<"saniye giriniz:";
	cin>>sn;
	
	
	
	zamanal(s,dk,sn);
	cout<<endl<<endl;
	zmn.goster();
	
	
	
	
	return 0;
}
