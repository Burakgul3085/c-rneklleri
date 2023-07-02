#include <iostream>
using namespace std;

/* bu chr ve if in olduðu kýsým mainin ister altýnda ister ustunde olsun fark etmez */






char notuharfe(int ogrnotu);

char notuharfe(int ogrnotu)
{
	if(ogrnotu>=0 && ogrnotu<50)
	return 'f';
		if(ogrnotu>=50 && ogrnotu<70)
		return 'd';
			if(ogrnotu>=70 && ogrnotu<80)
			return 'c';
				if(ogrnotu>=80 && ogrnotu<90)
				return 'b';
					if(ogrnotu>=90)
					return 'a';
					
}


int main()
{
	cout<<"not=76   harf= "<<notuharfe(76);
	cout<<"not=56    harf= "<<notuharfe(56);
	return 0;
}



