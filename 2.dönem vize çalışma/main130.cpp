#include <iostream>
#include <string>
using namespace std;

class test{
	string a;
	public:
		test(string x)
		{
			cout<<x<<endl;
			a=x;
			
		}
		
		string& degistir(test &y)
		{
			y.a="yenii cumle";
			return y.a;
			
		}
};


int main()
{
	
	test nesne1("ilk cumle");
	
	cout<<nesne1.degistir(nesne1)<<endl;
	
	
	return 0;
}
