#include <iostream>
#include <cstring>

using namespace std;



int main()
{
	
	char isim[50];
	cout<<"ismini gir yegen :";
	gets(isim);
	
	cout<<"ismini nasýl yazacam bah hele yegen :=)"<< endl;
	
	
	for (int i=0;i<50;i++)
	{
		if (isim[i]== '\0'  )
		{
			break;
		}
		cout<<isim[i]<<endl;
		
	}
	
	

	
	
	return 0;
}
