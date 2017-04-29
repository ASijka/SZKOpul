#include <iostream>

using namespace std;

int main()
{
		ios_base::sync_with_stdio(0);
		int n;
		cin>>n;
		int tab[n];
		int suma=0;
		int tmp;
		for(int i=0;i<n;i++)
		{
				cin>>tmp;
				suma+=tmp;
				tab[i]=tmp;
		}
		
		int srednia=suma/n;
		int roznica;
		int licznik_zmian=0;
		
		for(int i=0;i<n-1;i++)
		{
				roznica=srednia-tab[i];
				if(roznica!=0)
				{
						tab[i+1]-=roznica;
						licznik_zmian++;
				}
		}
				
		cout<<licznik_zmian;		
				
		return 0;		
}
