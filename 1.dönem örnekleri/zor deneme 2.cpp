#include <iostream>
using namespace std;
int main()
{
	
	
	int boyut=100;
	int dizi[boyut];
	int aranan_bilgi;
	int bulunan_indis=-1;
	
	// dizi i�i otomatik sayilara 2 ekleniyor
	
	for(int i=0;i<boyut;i++)
	{
		dizi[i]=i*2;
		
	}
	
	
	// aranacak bilgi kullan�c�dan isteniyor
	
	cout<<"aranacak bilgiyi giriniz:";
	cin>>aranan_bilgi;
	
	// dizi i�inde arama
	
	for(int i=0;i<boyut;i++)
	{
		if(aranan_bilgi==dizi[i])
		{
			bulunan_indis=i;
			cout<<"aranan sayi "<<bulunan_indis	 <<".ci indiste bulundu";
			break;
			
				}
	}
	
	// eger aranan bulunamaday�sa
	
	if(bulunan_indis==-1)
	{
		cout<<"girdigin deger bulunmadi:";
		
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
