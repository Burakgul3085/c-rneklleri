#include <iostream>
#include <string>
using namespace std;

class cagir{
	string a;
	public:
		cagir(string x)
		{
			a=x;
			cout<<"sinifin yapici fonk içindeyiz..."<<endl;
			
		}
		
		string erisim()
		{
			return a;
			
		}
};

void basvurufonk(cagir&);
void basvurufonk(cagir &nesne)
{
	cout<<"basvuru ile parametre aktarma ...."<<endl;
	cout<<"girilen cumle= "<<nesne.erisim()<<endl;
}


int main()
{
	string cumle;
	cout<<"cumle giriniz:"<<endl;
	getline(cin,cumle);
	
	cagir x(cumle);
	basvurufonk(x);
	
	
	
	
	return 0;
}

