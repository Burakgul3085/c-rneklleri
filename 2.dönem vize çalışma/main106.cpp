#include <iostream>
#include <cstring>
using namespace std;


class insanlar
{
	string ad,soyad;
	int yas;
	public :
		
		insanlar()
		{
			ad="zeynep";
			soyad="alphan";
			yas=23;
			
		}
	
	
	
	 insanlar(string a, string b,int c)
	{
		ad=a;
		soyad=b;
		yas=c;
		
	}
	
	void goster()
	{
		cout<<"ad:"<<ad<<endl;
		cout<<"soyad:"<<soyad<<endl;
		cout<<"yasi:"<<yas<<endl;
		
	}
	

};


int main()
{
	
insanlar insan1("ali","veli",25);
insanlar insan2("mehmet0","ayse",45);
insanlar insan3("am","yar",78);


insan1.goster();
insan2.goster();
insan3.goster();


insanlar insan4;
insan4.goster();

	
	
	return 0;
}
