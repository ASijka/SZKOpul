#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
		int n,jas;
		cin>>n>>jas;
		int licznik=0;
		int suma=0;
		int tmp=0;
		
		for(int i=0;i<n;i++)
		{
				scanf("%d",&tmp);
				suma+=tmp;
				if(suma>=jas)
				{
						licznik++;
						suma=0;
				}
		}
		
		cout<<licznik;	
}
