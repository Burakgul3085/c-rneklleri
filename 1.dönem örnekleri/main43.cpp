#include <iostream>
using namespace std;

int main()
{
	
int i,j;
int yuksek,kenar;
cout<<"yukseklik degeri giriniz:";
cin>>yuksek;
cout<<"kenar giriniz:";
cin>>kenar;


for(i=1;i<=yuksek;i++)
{
	for(j=1;j<=kenar;j++)
	{
		cout<<"*";
	}
	
	
	cout<<endl;
}

	
	return 0;
}
