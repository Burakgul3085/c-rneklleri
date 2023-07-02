#include <iostream>
using namespace std;

int main()
{
	
	int arr[5];
	
	// dizi olusturma 
	arr[0]=20; 
	arr[1]=30;
	arr[2]=40;
	arr[3]=50;
	arr[4]=60;
	
	// istenilen dizinin degerini değistirme 
	cout<<"arrayin ilk degerini degistirin:";
	cin>>arr[0];
	
	//tek boyutlu matriste listedekilerin hepsini yazdırma
	for(int i=0;i<=4;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	
	
	
	
	return 0;
}
