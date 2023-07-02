#include <iostream>
using namespace std;
struct uzunluk {
	int metre;
	int fit;
};

struct oda
{
	uzunluk en;
	uzunluk boy;
	
};





int main()
{
	
	oda salon;
	salon.en.metre=4;
	salon.en.fit=13;
	salon.boy.metre=5;
	salon.boy.fit=16;
	cout<<"salonun eni"<<salon.en.metre<<" mt veya " <<salon.en.fit<<" fit tir"<<endl;
	cout<<"salonun boyu "<<salon.boy.metre<<" mt veya "<<salon.boy.fit<<" fit tir"<<endl;
	
	
	return 0;
}
