#include <iostream>
using namespace std;


int main()
{
	int islem,x,y;
	cout<<"1.sayiyi gir:";
	cin>>x;
	cout<<"2.sayiyi gir:";
	cin>>y;
	
	
	cout<<"bir islem seciniz?  \n";
	cout<<" 1 toplama:   \n";
	cout<<" 2 cýkarma :   \n";
	cout<<" 3 carpma :     \n";
	cout<<" 4 bolme :       \n";
	
	cin>> islem ;
	
	
	
	switch(islem)
	{
		case 1:
			cout<<"toplamlari:  \n"<<x+y;
			break;
				case 2:
			cout<<"farklari:  \n"<<x-y;
			break;
			case 3:
			cout<<"carpimlari:  \n"<<x*y;
			break;
			case 4:
			cout<< "bolumleri :  \n"<<x/y;
			break;
			default:
				cout<<"hatali";
			
		
	}
	

	
	return 0;
}
