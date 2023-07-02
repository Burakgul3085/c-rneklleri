#include <iostream>
using namespace std;

struct tarih 
{
	int gun,ay,yil;
	
};
struct tarih yashesapla(struct tarih , struct tarih);
struct tarih yashesapla(struct tarih x,struct tarih y)
{
	tarih sonuc;
	
	if(x.gun<y.gun)
	{
		x.ay=x.ay-1;
		sonuc.gun=30+x.gun-y.gun;
	}
	else
	{
		sonuc.gun=x.gun-y.gun;
    }
    
    if(x.ay<y.ay)
    {
    	x.yil=x.yil-1;
    	sonuc.ay=12+x.ay-y.ay;
	}
	else
	{
		sonuc.ay=x.ay-y.ay;
	}

sonuc.yil=x.yil-y.yil;

return sonuc;	
} 



int main()
{
	tarih bugun,dogum,sonuc;
	
	cout<<"bugun yasinizi gu ay yýl seklinde giriniz:"<<endl;
	
	cin>>bugun.gun>>bugun.ay>>bugun.yil;
	cout<<"dogum gununu gun ay yil seklinde giriniz:";
	cin>>dogum.gun>>dogum.ay>>dogum.yil;
	sonuc=yashesapla(bugun,dogum);
	cout<<sonuc.yil<<" yil "<<sonuc.ay<<" ay "<<sonuc.gun<<" gundur ";
	
	
	
	
	return 0;
	
}
