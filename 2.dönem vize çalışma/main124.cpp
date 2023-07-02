#include <iostream>
using namespace std;


class dikdortgen{
	int uzunkenar,kisakenar;
	
	public:
		
		friend void goster(dikdortgen d);
		
		dikdortgen()
		{
			uzunkenar=10;
			kisakenar=5;
		}
		
		dikdortgen(int uzun,int kisa)
		{
			uzunkenar=uzun;
			kisakenar=kisa;
			
		}
};

void goster(dikdortgen d)
{
	cout<<"dikdortgenin alani:"<<d.uzunkenar*d.kisakenar<<endl;
	cout<<"dikdortgwnin cevresi:"<<(d.uzunkenar+d.kisakenar)*2<<endl;
}

int main()
{
	
	int uzun,kisa;
	cout<<"uzun kenari gir: ";
	cin>>uzun;
	cout<<"kisa kenari gir:";
	cin>>kisa;
	
	dikdortgen x(uzun,kisa);
	goster(x);
	
	
	cout<<endl<<endl;
	
	cout<<"kullanicidan deger almadan elde edilen sonuc="<<endl;
	dikdortgen y;
	goster(y);
	
	
	
	return 0;
}
