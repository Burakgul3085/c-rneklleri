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
			        soyad="yilmaz";
		            	yas=28;
		}
	
	
	
	
	insanlar(string a , string b, int c)
	{
		ad=a;
	       soyad=b;
		     yas=c;
	}
	
	insanlar(string a)
	{
		ad=a;
		soyad="peker";
		yas=63;
	}
	
	
	
	
	
	void goster()
	{
		cout<<"ad :"<<ad<<endl;
	     	cout<<"soyad :"<<soyad<<endl;
		        cout<<"yas:"<<yas<<endl;
	}
	
};


int main()
{
	
	insanlar insan1("burak","gul",19);
	  insanlar insan2("muhammed","gul",5);
	     insanlar insan3("kadir","gul",23);
	
	
	
	insan1.goster();
	  cout<<"--------------"<<endl;
      	insan2.goster();
		 cout<<"--------------"<<endl;
        	insan3.goster();
		    cout<<"--------------"<<endl;
		    
		    insanlar insan4;
		    insan4.goster();
		    
		    cout<<"--------------"<<endl;
		    
		    string ad;
		    cout<<"ad giriniz:"<<ad;
		    cin>>ad;
		    insanlar insan5(ad);
		    insan5.goster();
	
	
	
	return 0;
}
