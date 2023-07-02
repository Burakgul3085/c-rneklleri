#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	
	time_t tarih=time(0);
	cout<< ctime(&tarih);
	
	return 0;
}
