#include <iostream>
using namespace std;


int main()
{
	int boy , kilo;
	
	cout<<"boyunuzu giriniz:";
	cin>>boy;
	cout<<"kilonuzu giriniz:";
	cin>>kilo;
	
	if(kilo<80 && boy>180)
	{
		cout<<" uygunsunuz";
	}
	else{
		cout<<"uygun degilsiniz";
	}
	
	
	
	return 0;
}
