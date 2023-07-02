#include <iostream>
#include <cstring>
using namespace std;

class insanlar
{
	string ad,soyad;
	int yas; 
	
	
	public:
		
		insanlar()
		{
			ad="ali";
			soyad="veli";
			yas=49;
		}
		
		insanlar(string a, string b,int c )
		{
			ad=a;
			soyad=b;
			yas=c;
			
		}
		
		insanlar(string a)
		{
			ad=a;
			soyad="peker";
			yas=60;
		}
		
		void goster()
		{
			cout<<"ad :"<<ad<<endl;
			cout<<"soyad :"<<soyad<<endl;
			cout<<"yas :"<<yas<<endl<<endl;
			
		}		
};


int main()
{
	
	insanlar insan1("sezen ","aksu",55);
	insanlar insan2("ali","veli",89);
	insanlar insan3("mehmet","poyraz",56);
	
	insan1.goster();
	insan2.goster();
	insan3.goster();
	
	
	insanlar insan4;
	insan4.goster();
	
	string ad;
	cout<<"ad giriniz:";
	cin>>ad;
	insanlar insan5(ad);
	insan5.goster();
	
	
	
	cout<<"baska ad daha gir:";
	cin>>ad;
	insanlar insan6(ad);
	insan6.goster();
	
	
	
	return 0;
}
