#include <iostream>

using namespace std;

int main()
{
		int n;
		cin>>n;
		
		int tab[n];
		
		for(int i=0;i<n;i++)
				cin>>tab[i];
				
		long long  licznik=0;
		
		for(int i=0;i<n;i++)	
		{
				if(tab[i]<0)
						licznik++;
		}	
			
		cout<<licznik*(n-1);
		
		return 0;	
}
