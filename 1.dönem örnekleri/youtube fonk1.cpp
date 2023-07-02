#include <iostream>
using namespace std;



int alanhesap(int x, int y)
{
	int alan=x*y;
	return alan;
	
}

int main()
{
//  c++ da sonucu herzaman  0 a esitle	
	int sonuc=0;
	sonuc=alanhesap(1,2);
	
	cout<<"dikdortgenin alani= "<<sonuc;
	// buolursa da olur olmasa da 
	cout<<endl;
	return 0;
	
}
