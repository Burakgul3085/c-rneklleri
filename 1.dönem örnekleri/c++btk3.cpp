#include <iostream>
using namespace std;


int main()
{
	
int dizi[3][2]={ {23,32},
                 {55,74},
                 {78,98}
                        };
                        
                
		/*bununla istenilen sat�r ve s�t�ndaki sonucu arat�yoryz		
				cout<<dizi[2][0];        
	
	
*/

// burada hepsini d�ng�ye sokuyoruz.
	   for (int i=0;i<=2;i++)
	   {
	   	for(int j=0;j<=1;j++)
	   	{
	   		cout<<dizi[i][j];
		   }
	   	cout<<endl;
	   }
	
	
	
	
	return 0;
}
