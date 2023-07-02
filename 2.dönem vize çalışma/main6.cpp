#include <iostream>
using namespace std;

int main()
{
	
int boyut=100;
int dizi[boyut];
int bulunanindis=-2;
int aranbilgi	;


// dizi içi otomatik iki 2 kat ekleniyor

for(int i=0;i<boyut;i++)
{
	dizi[i]=i*2;
	
}
	
//aranacak bilgi isteme

cout<<"aranacak bilgiyi gir";
cin>>aranbilgi;

//dizi içi arama

for(int i=0;i<boyut;i++)
{
	
if(aranbilgi==dizi[i])
{
	bulunanindis=i;
	cout<<" aranan sayi "<< bulunanindis << ".ci indiste bulundu ";
	break;
	
}
}
	
	if(bulunanindis==-1)
	cout<<"girdiginiz sayi dizide bulunamadi";
	
	
	return 0;
	
}
