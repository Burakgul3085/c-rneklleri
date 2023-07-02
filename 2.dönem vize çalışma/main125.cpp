#include <iostream>
using namespace std;

class ogrenci{
	float vize,final;
	
	public:
		friend void al();
		friend void goster();
		
}ogr1;


void al()
{

	float vz,fn;
	cout<<"vize notunu gir: ";
	cin>>vz;
	cout<<"final notunu gir:";
	cin>>fn;
	 ogr1.vize=vz;
	 ogr1.final=fn;
	
}

void goster()
{
	float ort=ogr1.vize*0.4+ogr1.final*0.6;
	cout<<"ortalamasi = "<<ort<<endl;
}


int main()
{
	al();
	goster();
	
	
	return 0;
}

