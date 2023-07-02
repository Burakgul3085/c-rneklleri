#include<iostream>
  #include<cstdlib>
  #include "unistd.h"

   using namespace std;
   int main()
  {
    unsigned int sure,i=0;

   system("Title Bilgisayarý Kapat [EMRE SUPCIN]");
   cout<<"Bilgisayar Kac Saniye Sonra Kapatilsin? [0-100]=";
  cin>>sure;

   if(sure>=0 && sure<=100)
  {
     while(i<sure)
  { 
     cout<<i<<endl;
     sleep(1);

     ++i;
  }
    cout<<"Sureniz Doldu! Bilgisayar Kapatiliyor… [EMRE SUPCIN]" ;
    sleep(1);

     system("shutdown -h");
  }
    else
 {
     cout<<"Sure siniri 0-100 arasi saniyedir.."<<endl;
  }
    return 0;
  }
