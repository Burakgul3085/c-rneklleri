#include <iostream>
#include <string>
using namespace std;

string& degistir(string &);

int main()
{
	string a="ilk cumle";
	cout<<"string ilk hali:"<<a<<endl;
	cout<<"string ilk halinin bellekteki yeri: "<<&a<<endl;
	
	cout<<"string yeni hali: ";
	cout<<degistir(a)<<endl;
	
	cout<<"yeni halinin bellekteki yeri :"<<&degistir(a)<<endl;
	
	
	
	return 0;
}

string& degistir(string &cumle)
{
	cumle="yeni cumle";
	return cumle;
}
