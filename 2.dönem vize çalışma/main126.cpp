#include <iostream>
using namespace std;

void gostericifonk(double *);
void basvurufonk(double &);

int main()
{

double x=1;
gostericifonk(&x);
cout<<"gosterici ile cagrýldýktan sonra xin degeri :"<<x<<endl;

basvurufonk(x);
cout<<"basvuru ile cagrildiktan sonra x in degeri:::"<<x<<endl;
	
	
	
	return 0;
}

void gostericifonk(double *a)
{
	cout<<"gosterici fonk icindeyiz:::"<<endl;
	*a=5;
	
}

void basvurufonk(double &b)
{
	cout<<"basvuru fonk icindeyiz:::"<<endl;
	b=25;
}
