#include <iostream>
using namespace std;

int main()
{


int vize,final,ort;

cout<<"vize notunu gir: \n";
cin>>vize;
cout<<"final notunu gir: \n";
cin>>final;

ort=vize*0.6+final*0.4;

cout<< "ortalamaniz:"<<ort;

if (ort>90)
{
	cout<<"aa aldiniz: \n";
	
}

else if(ort>50 && ort<60)
{
	cout<<"sartli gecis"<<endl;
	
}
else {
	cout<<"kaldiniz";
}

return 0;
}
