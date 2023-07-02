#include <iostream>
#include <cstring>
using namespace std;

class arabalar{
	
	string marka,model;
	int yil;
	
	public:
		
		void arabaoku(string mrk, string mdl,int yl){
			
			marka=mrk;
			model=mdl;
			yil=yl;
			
		}
		
		void arabayaz(){
			cout<<"arabanin modeli :"<<model<<endl;
			cout<<"arabanin markasi:"<<marka<<endl;
			cout<<"arabnin yili :"<<yil<<endl<<endl;
			cout<<"----------------"<<endl;
			
		}
		
		
		int main()
		{
			 arabalar a1,a2,a3;
			 
			 a1.arabaoku("opel","astra",2023);
			 a2.arabaoku("porsh","taycan",2024);
			 a3.arabaoku("bugatti","veyron",210);
			 
			 a1.arabayaz();
			 a2.arabayaz();
			 a3.arabayaz();
			
			
			return 0;
		}
	
	
	
	
	
	
	
	
};
