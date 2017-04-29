#include <iostream>

using namespace std;

int main()
{
   		int n;
   		long long int licznik=0;
   		long long int licznikn=0;
   		int s;
   		long long int liczniks=0;
   		cin>>n;
   		while(n>licznikn)
   		{
   				cin>>s;
   				if(s==0)
   						liczniks++;
   				if(s==1)
				   		licznik=licznik+liczniks;
				licznikn++;		   		   		
   		}
   		
   		cout<<licznik;
   		
    	return 0;
}
