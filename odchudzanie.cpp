#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
		int n;
		cin>>n;
		
		int tab[n];
		
		for(int i=0;i<n;i++)
		{
				scanf("%d",&tab[i]);
		}
		
		int max=0;
		int wynik=0;
		int wyniktmp;
		
		for(int i=0;i<n;i++)
		{
				if(tab[i]>max)
						max=tab[i];
				wyniktmp=max-tab[i];
				if(wyniktmp>wynik)
						wynik=wyniktmp;
				wyniktmp=0;
		}
		
		cout<<wynik;
}
