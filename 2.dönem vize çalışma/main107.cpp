#include <iostream>
#include <cstring>
using namespace std;

class insanlar{
	string ad,soyad;
	int yas;
	
	public:
		
	insanlar()
	{
		ad="ali";
		soyad="veli";
		yas=23;
	}
	
	insanlar(string a,string b,int c)
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
		cout<<"adini gir:"<<ad<<endl;
        cout<<"soyadini gir"<<soyad<<endl;
        cout<<"yasini gir:"<<yas<<endl;
    	
	}
	

};



int main()
{
	
	insanlar insan1("x ","y ",45);
	insanlar insan2("z ","t ",47);
	insanlar insan3("p ","r ",48);
	

	insan1.goster();
	insan2.goster();
	insan3.goster();
	
	
	insanlar insan4;
	insan4.goster();
	
	
	string ad;
	cout<<"adini gir:"<<endl;
	cin>>ad;
	insanlar insan5;
	insan5.goster();
	
	
	
	
	cout<<"baska bir ad daha gir:"<<endl;
	cin>>ad;
	insanlar insan6;
	insan6.goster();
	

	return 0;
}
