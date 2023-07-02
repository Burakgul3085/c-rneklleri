#include <iostream>
using namespace std;


int main()
{
	int i;
	float f;
	char c;
	int *pi;
	float *pf;
	char *pc;
	
	
	cout<<"int i="<<sizeof(i)<<" bayt";
		cout<<"float f="<<sizeof(f)<<" bayt";
			cout<<"char c="<<sizeof(c)<<" bayt";

	           cout<<"int *pi"<<sizeof(*pi)<<" bayt";

	              cout<<"float *pf="<<sizeof(*pf)<<" bayt";

                    	cout<<"char c="<<sizeof(*pc)<<" bayt";



	
	return 0;
	
}
