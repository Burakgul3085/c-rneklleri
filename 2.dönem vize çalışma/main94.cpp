#include <iostream>
using namespace std;
 
 
 class dikdortgen{
     public :
	 int kisakenar;
	 int uzunkenar;
	 
	 int alan()
	 {
	 	return kisakenar*uzunkenar;
		 }	
	 int cevre()
	 {
	 	return 2*(kisakenar+uzunkenar);
	 	
	 }
 }x;
 
 
 	int main()
 	{
 		
 		cout<<" kisa kenar giriniz:"<<endl;
 		cin>>x.kisakenar;
 		cout<<" uzun kenar giriniz:"<<endl;
 		cin>>x.uzunkenar;
 		
 		cout<<" dikdortgenin  alanı :"<<x.alan()<<endl;
 		cout<<" dikdortgenin cevresi :"<<x.cevre()<<endl;
 	
 		return 0;
	 }
