#include <iostream>
using namespace std;



char notu_harfe(int ogr_not);

int main()
{
	cout<<"not=75  harf="<<notu_harfe(75);
	cout<<"notu=56 harf ="<<notu_harfe(56);
	return 0;
}


char notu_harfe(int ogr_not)
{
	if(ogr_not>=0 && ogr_not<50)
	return 'f';
	
	
	if(ogr_not>=50 && ogr_not<70)
	return 'D';
	
	if(ogr_not>=70 && ogr_not<80)
	return 'c';
	
	if(ogr_not>=80 && ogr_not<90)
	return 'B';
	
	if(ogr_not>=90)
	return 'B';
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
