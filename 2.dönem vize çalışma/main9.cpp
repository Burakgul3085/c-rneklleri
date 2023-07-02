#include <iostream>
using namespace std;


int main()
{
	float ogr[3][2];
	float ort;
	
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<< i << ".ci ogrencinin "<< j << ".ci notunu giriniz";
			cin>>ogr[i][j];
			
			
		}
	}
	
	
	for (int i=0;i<3;i++)
	{
		ort=ogr[i][0]*0.4+ ogr[i][1]*0.6;
		cout<< i << ".ci ogrencinin ortalama notu ="<<ort;
		
	}
	
	
	
	return 0;
}
