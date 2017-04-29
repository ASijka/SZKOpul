#include <bits/stdc++.h>

using namespace std;

int main()
{
		int ilosc_pol;
		vector <int> tab;
		
		int liczba_bulw;
		
		cin>>ilosc_pol;		
		int a;
		for(int i=0;i<ilosc_pol;i++)
		{
			cin>>a;
			tab.push_back(a);
		}
		sort(tab.begin(), tab.end());		
		cin>>liczba_bulw;		
		long long suma=0;
		
		int max=0;
		
		for(int i=ilosc_pol-1;i>=0;i--)
		{
				int  b=tab[i];
				if(tab[i]>=liczba_bulw)
				{
						max=liczba_bulw;
						liczba_bulw-=max;
				}
				else
				{
						max=tab[i];
						liczba_bulw-=max;
				}
				suma+=max*max;
				max=0;
		}
		
		cout<<suma;
			
		return 0;		
}


