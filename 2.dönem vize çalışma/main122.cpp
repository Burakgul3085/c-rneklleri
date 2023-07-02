#include <iostream>
using namespace std;

class kamyon;

class araba{
	int kisisayi,hiz;
	
	public:
		araba(int y,int h)
		{
			kisisayi=y;
			hiz=h;
		}
		
		int arkadaslik(kamyon k);
};


class kamyon{
	int tonaj,hiz;
	
	public:
		kamyon(int a,int b)
		{
			tonaj=a;
			hiz=b;
		}
		
		friend int araba::arkadaslik(kamyon k);
};


int araba::arkadaslik(kamyon k)
{
	return hiz-k.hiz;
}



int main()
{
	int m;
	araba araba1(2,225);
	araba araba2(4,85);
	
	kamyon kamyon3(3000,75);
	kamyon kamyon4(3200,85);
	
	cout<<"araba1 ve kamyon3 karsiasltirma:"<<endl;
	m=araba1.arkadaslik(kamyon3);
	
	if(m<0)
	cout<<"kamyon daha hizli";
	else if(m==0)
	cout<<"araba ile kamyon esit";
	else
	cout<<"araba daha hizli";
	
	cout<<endl<<endl;
	
	cout<"araba2 ile kamyon4 u karsilastiralim:";
	m=araba2.arkadaslik(kamyon4);
	
		if(m<0)
	cout<<"kamyon daha hizli";
	else if(m==0)
	cout<<"araba ile kamyon esit";
	else
	cout<<"araba daha hizli";

	return 0;
}


