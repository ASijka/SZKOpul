#include <iostream>
#include <stdio.h>

using namespace std;

long long gcd(long long a, long long b) 
{
	  long long  r, i;
	  while(b!=0)
	  {
		    r = a % b;
		    a = b;
		    b = r;
	  }
	  return a;
}
int main()
{
		ios_base::sync_with_stdio(0);
		
		long long a,b;
		cin>>a>>b;
		
		if(gcd(a,b)==1)
		{
				cout<<"TAK";
				return 0;
		}
		else
		{
				cout<<"NIE";
				return 0;
		}					
}
