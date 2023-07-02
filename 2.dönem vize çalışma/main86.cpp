#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	
	srand(time(0));
	cout<<" rastgele 1-100 arasi:"<<rand()% 100+ 1<<endl;
	cout<<"rastgehe 30-60 arasý :"<<30+rand()%(60-30)<<endl;
	
	
	return 0;
}
