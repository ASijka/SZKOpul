#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
		int n;
		cin>>n;
		int suma=0;
		int tab[n];
		int licznik=0;
		for(int i=0;i<n;i++)
		{
				scanf("%d",tab+i);
				suma+=tab[i];
				if(suma*2==((i+1)*(i+2)))
						licznik++;
		}
		cout<<licznik;
		
		return 0;
}
