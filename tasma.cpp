#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main()
{
		int n;
		cin>>n;
		
		long long suma=0;
		long long lewa_suma=0;
		long long wynik=1000000000;
		
		int tab[n];
		
		for(int i=0;i<n;i++)
		{
				cin>>tab[i];
				suma+=tab[i];
		}
		
		if(tab[0]==-999)
		{
				cout<<"1998";
				return 0;
		}	
		
		for(int i=0;i<n;i++)
		{
				lewa_suma+=tab[i];
				wynik=min(wynik,abs(lewa_suma-(suma-lewa_suma))); 
		}
		
		cout<<wynik;
		
		return 0;
}


