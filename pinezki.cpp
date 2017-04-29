#include <iostream>

using namespace std;

int main()
{
		int n;
		cin>>n;
		
		int tab[n];
		
		int licznik=0;
		int max=0;
		
		for(int i=0;i<n;i++)
		{
				cin>>tab[i];
				if(tab[i]==1)
						licznik++;
						
				else if(tab[i]==0)
				{
						if(licznik>max)
								max=licznik;
						licznik=0;		
				}		
		}
		
		if(licznik>max)
								max=licznik;
		
		cout<<max;
		
		return 0;
}
