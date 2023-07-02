#include <iostream>
#include <cstring>
using namespace std;

class insanlar{
	
	private :
		string ad,soyad;
		int yas;
	
	public:
		
	insanlar();
	insanlar(string a,string b, int c);
	void yazdir();
};

insanlar::insanlar()
{
	ad="ali ";
	soyad="yilmaz ";
	yas=19;
	
}

insanlar::insanlar(string a,string b,int c)
{
	ad=a;
	soyad=b;
	yas=c;
}


void insanlar::yazdir()
{
	cout<<"ad: "<< ad<<endl;
	cout<<"soyad: "<< soyad<<endl;
	cout<<"yas: " << yas;
	
}


int main()
{
	
	insanlar insan1("mehmet","poyraz",78);
	insanlar insan2("xin","xiomi",89);
	insanlar insan3;
		

	
	
	insan1.yazdir();
		cout<<"--------------"<<endl;

	insan2.yazdir();
		cout<<"--------------"<<endl;

	insan3.yazdir();
		cout<<"--------------"<<endl;


	
	
	
	
	return 0;
}
