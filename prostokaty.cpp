#include <iostream>
#include <math.h>

using namespace std;

int main()
{
		int n;
		cin>>n;
		int p=sqrt(n);
		int licznik=0;
		for(int i=1;i<=p;i++)
		{
				licznik+=(n/i-i+1);	
		}
		cout<<licznik;
		
		return 0;
}
