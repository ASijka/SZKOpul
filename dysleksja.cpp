#include <iostream>

using namespace std;

int main()
{
		int n;
		
		cin>>n;
		
		
		char tab[n];
		char tab2[n];
		
		for(int i=0;i<n;i++)
		{
				cin>>tab[i];
		}
		
		for(int i=0;i<n;i++)
		{
				cin>>tab2[i];
		}
		
		int licznik=0;
		
		for(int i=0;i<n;i++)
		{
				if(tab[i]!=tab2[i])
				{
					
					licznik++;	
				}
		}
		
		cout<<licznik;
		
		return 0;
		
		
		
		
}
