#include <iostream>
using namespace std;


int main()
{
	int sayi;
	cout<<"1-5 arasi sayi giriniz: ";
	cin>>sayi;
	
	switch(sayi)
	{
		case 1:
			cout<<"pazartesi \n";
			break;
			
			case 2:
				cout<<"salý  \n";
				break;
				
				case 3:
					cout<<"carsamba  \n";
					break;
					
					case 4:
						cout<<"persembe  \n";
						break;
						
						
						case 5:
							cout<<"cuma  \n";
							break;
							
							
							default :
								cout<<"haftasonu \n";
		
		
	}
	
	
	
	
	
	return 0;
}
