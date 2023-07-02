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
		
		insanlar(string a, string b,int c)
		{
			ad=a;
			soyad=b;
			yas=c;
			
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
	
	insanlar insan1("sezen","aksu",78);
	insanlar insan2("burak","gul",19);
	insanlar insan3("ali","yilmaz",89);
	
	insan1.goster();
	insan2.goster();
	insan3.goster();
	
	
	insanlar insan4;
	insan4.goster();
	

	
	return 0;
}








