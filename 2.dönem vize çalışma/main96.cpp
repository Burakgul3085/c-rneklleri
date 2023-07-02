#include <iostream>
using namespace std;

class personel
{
	int yas;
	public:
		void gir(int x)
		{
			yas =x;
			
		}
		
		void yaz()
		{
			cout<<yas;
		}
};

int main()
{
	personel p;
	int x;
	
	cout<<" personelin yasini giriniz:" <<endl;
	cin>>x;
	p.gir(x);
	
	cout<<" personelin yasi=";
	p.yaz();

	return 0;
	
}
