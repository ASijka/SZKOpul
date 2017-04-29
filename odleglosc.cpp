#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
		int n;
		cin>>n;
		
		int tab[n];
		int tab2[n];
		int wskaznik=0;
		int licznik=0;
		
		for(int i=0;i<n;i++)
		{
				scanf("%d",tab+i);
				if(i==0)
						tab2[i]=tab[i];	
				else
				{
						int krzak=tab[wskaznik]+(i-wskaznik);
						if(tab[i]>krzak)
						{
								wskaznik=i;
								tab2[i]=tab[i];				
						}				
						else
						{
								tab2[i]=krzak;
						}
				}
				int tmp=tab2[i]+tab[i];		
				if(tmp>licznik)
						licznik=tmp;
		}	
		
		cout<<licznik;
		
		return 0;	
}
