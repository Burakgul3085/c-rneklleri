#include <iostream>
using namespace std;

class goster
{
	private :
		int sayi;
		public:
			void atamayap(int a)
			{
				sayi=a;
			}
	
 
             int ekranayaz()
             {
             	return sayi;
			 }
}x,y;


int main()
{
	
	
	x.atamayap(50);
	y.atamayap(100);
	
	cout<<" x= "<<x.ekranayaz()<<endl;
	cout<<" x= "<<y.ekranayaz()<<endl;

	return 0;
}
