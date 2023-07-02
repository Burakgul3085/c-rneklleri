#include <iostream>
#include <string>
using namespace std;

class insanlar
{
	string ad,soyad;
	int yas;
	
	public:
		insanlar(string a, string b, int c)
		{
			ad =a;
			soyad=b;
			yas=c;
			
		}
	
	 void goster()
	 {
	 	cout<<"ad : "<<ad<<endl;
	 	cout<<"soyad:"<<soyad<<endl;
	 	cout<<"yas: "<<yas<<endl<<endl;
	 	
      }
};




int main()
{
	
insanlar insan1("sezen" ,"aksu",999);
insanlar insan2("abdurrezaak","bacak",54);
insanlar insan3("ahmet","dogan",23);


insan1.goster();
insan2.goster();
insan3.goster();

	return 0;
}
