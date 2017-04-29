#include <iostream>

using namespace std;

int main()
{
	    int d;
		int s;
		cin>>d>>s;
		
		int licznik=0;
		
		while(d>0)
		{
				if(s==1)
				{
						licznik=licznik+d;
						cout<<licznik;
						return 0;
				}
				
				d=d-s;
				if(s>1)
						s=s/2;
				else
						s=1;
				licznik++;		
		}
		
		cout<<licznik;
		
		return 0;
}
