#include <iostream>
#include <cstring>
using namespace std;

class arabalar{
	string marka,model;
	int yil;
	public:
		
		arabalar();
		arabalar(string x,string y,int z);
		void yazdir();
	
};


arabalar::arabalar()
{
	marka="audi";
	model="a3";
	yil=2021;
	
}



arabalar::arabalar(string x,string y,int z)
{
	marka=x;
	model=y;
	yil=z;

}


void arabalar::yazdir()
{
	cout<<"marka :"<<marka<<endl;
	cout<<"model:"<<model<<endl;
	cout<<"yil:"<<yil<<endl<<endl;
	
}

int main()
{
	
	arabalar araba1("opel","astra",2015);
	arabalar araba2("ford","focus",2016);
	arabalar araba3("wolkswogen","passat",2019);
	
	araba1.yazdir();
	araba2.yazdir();
	araba3.yazdir();	
	
	
	
	return 0;
}




