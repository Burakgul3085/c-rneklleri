#include <iostream>
using namespace std;

struct hava
{
	float sicak;
	float nem;
	float ruzgar;
	
};

int main()
{
	
hava bugun,dun;

float sicakfark,nemfark,ruzgarfark;
cout<<"bugunun sicakligini gir:";
cin>>bugun.sicak;
cout<<"bugunun nemini gir:";
cin>>bugun.nem;
cout<<"bugunun ruzgarini gir:";
cin>>bugun.ruzgar;
cout<<"dunun sicakligini gir:";
cin>>dun.sicak;
cout<<"dunun nemini gir:";
cin>>dun.nem;
cout<<"dunun ruzgarini gir:";
cin>>dun.ruzgar;

sicakfark=bugun.sicak-dun.sicak;
nemfark=bugun.nem-dun.nem;
ruzgarfark=bugun.ruzgar-dun.ruzgar;


cout<<"bugunun dune güre sicaklik farki:"<<sicakfark<<endl<<endl<<"bugunun düne göre nem farki:"<<nemfark<<endl<<endl<<"bugunun dune göre ruzgar farki:"<<ruzgarfark;
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
