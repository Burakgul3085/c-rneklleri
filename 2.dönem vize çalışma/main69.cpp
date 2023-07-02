#include <iostream>
using namespace std;
#define anakisim int main()
#define basla {
#define bitir }
#define tamsayi int
#define yaz cout
#define oku cin
#define sonkomut return 0
#define dongu(i,j) for(i=0;i<j;i++)

anakisim
basla
tamsayi  n,i;
yaz<<"kac elemanli dizi olusturulsun:";
oku>>n;
tamsayi dizi[n];
dongu(i,n)

basla 
yaz<<i<<" ci sayiyi griniz:";
oku>>dizi[i];
bitir

yaz<<"dizinin elemanlari:"<<endl;
yaz<<"--------------------"<<endl;

dongu(i,n)
basla
yaz<<dizi[i]<<endl;
bitir

sonkomut;
bitir
