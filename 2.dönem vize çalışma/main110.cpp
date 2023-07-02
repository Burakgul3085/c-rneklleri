#include <iostream>
using namespace std;

class denemesinif{
	int a;
	public:
		void atamayap(int);
		int goruntule();

};

void denemesinif::atamayap(int sayi)
{
	a=sayi;
}

int denemesinif::goruntule()
{
	return a;
}

int main()
{
	denemesinif nesne1,nesne2;
	nesne1.atamayap(123);
	nesne2=nesne1;
	
	cout<<"nesne1 in a degeri="<<nesne1.goruntule()<<endl;
	cout<<"nesne2 in a degeri="<<nesne2.goruntule()<<endl;
	
	
	return 0;
}
