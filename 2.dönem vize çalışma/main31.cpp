#include <iostream>
using namespace std;

int main()
{
	
	int  *p1,i=3;
	p1=&i;
	
	
	double *p2,j=5;
	p2=&j;
	
	cout<<"i nin boyutu ="<<sizeof(i)<<" byte"<<endl;
	cout<<"p1 nin boyutu ="<<sizeof(p1)<<" byte"<<endl;
	cout<<" p1="<<p1;
	p1++;
	cout<<"p1="<<p1	<<endl<<endl<<endl;
	
	
	
	
	cout<<"j nin boyutu ="<<sizeof(j)<<" byte"<<endl;
	cout<<"p2 nin boyutu ="<<sizeof(p2)<<" byte"<<endl;
	cout<<" p2="<<p2;
	p1++;
	cout<<"p2="<<p2	<<endl<<endl<<endl;
	
	
	
	
	
	return 0;
	
}
