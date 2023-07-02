#include <iostream>
#include <string>
using namespace std;




class bisiklet
{
	int vitessayisi;
	string marka;
	public:
		bisiklet()
		{
			vitessayisi=18;
			marka="salcano";
			
		}
		
		bisiklet(int x, string y)
		{
			vitessayisi=x;
			marka=y;
			
		}
		
		bisiklet(int x)
		{
			vitessayisi=x;
			marka="bisan";
			
		}
		void yazdir()
		{
			cout<<"vitessayii="<<vitessayisi<<endl;
			cout<<"marka:"<<marka;
		}
};
	
	
	int main()
	{
		bisiklet b1(21,"bianchi");
		bisiklet b2(15,"bmx");
		bisiklet b3(22);
		bisiklet b4;
		b3.yazdir();
		
		return 0;
	}
	
	
	
