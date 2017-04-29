#include <iostream>

using namespace std;

int main()
{
		ios_base::sync_with_stdio(0);
		
		int n;
		unsigned long long k;
		cin>>n>>k;
		
		unsigned long long tab[n];
		
		for(int i=0;i<n;i++)
				cin>>tab[i];
				
		unsigned long long licznik=1;		
				
		unsigned long long suma=0;		
				
		for(int i=0;i<n;i++)
		{
				if(tab[i]>=k)
				{
						suma+=licznik*(n-i);
						licznik=1;
				}
				else
						licznik++;		
		}		
		
		cout<<suma;
		
		return 0;
}
