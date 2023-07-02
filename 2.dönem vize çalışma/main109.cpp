#include <iostream>
using namespace std;

class test{
	public:
		int a;
		test()
		{
			cout<<"yapici fomksiyon calisti:::"<<endl;
			a=15;
		}
	   
	    ~test(){
	    	cout<<"gorev bitti yikici fonksiyon calisiyor:::"<<endl;
	    	
		}
	   
	    void goruntule()
	    {
	    	cout<<"a degeri = "<<a<<endl;
		}
		}x;
		
		
		int main()
		{
			x.goruntule();
			
			
			test y;
			y.goruntule();
			
			
			return 0;
		}
