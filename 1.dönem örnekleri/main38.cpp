#include <iostream>
using namespace std;

int main()
{
	
	int bas,son;
	int toplam=0;
	
	cout<<"baslangic degerini giriniz:"<<endl;
	cin>>bas;
	
	cout<<"son degeri giriniz:";
	cin>>son;
	
	int i=bas;
	while(i<=son)
	{
		toplam=toplam+i;
		i++;
		
	}
	
	
	cout<<"sayilaarin toplami:"<<toplam;

	return 0;
}
