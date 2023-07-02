#include <iostream>
#include <string>
using namespace std;

class arabalar
{
	string marka,model;
	int yil;
	
	public :
		arabalar();
		arabalar(string x,string y,int z);
		void yazdir();
		
		
};

arabalar::arabalar()
{
	marka="audi";
	model="a3";
	yil=2023;
	
}

arabalar::arabalar(string x,string y,int z)
{
	marka=x;
	model=y;
	yil=z;
}


void arabalar ::yazdir()
{
	cout<<" marka :"<<marka<<endl;
	cout<<"model : "<<model<<endl;
	cout<<"yil :"<<yil<<endl;
	
}

int main()
{
	
arabalar araba1("wolkswogem","passsat",2018);
arabalar araba2("wolkswogen","golf",2020);
arabalar araba3;


araba1.yazdir();
araba2.yazdir();
araba3.yazdir();
	

	return 0;
}





