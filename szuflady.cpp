#include <iostream>
#include <stdio.h>

using namespace std;

int return_main(int val)
{
	printf("%d\n", val);
	return 0;
}

int main()
{
		int n;
		 scanf("%d", &n);
		
		int tab[n];
		
		for(int i=0;i<n;++i)
				 scanf("%d", &tab[i]);
				
		int licznik=0;		
		
		for(int i=n-2;i>-1;--i)
		{		
				if(tab[i]>=tab[i+1])
				{
						if(tab[i+1]<2)
							return return_main(-1);
							
						licznik++;
						tab[i]=tab[i+1]-1;
				}
		}
		
		return return_main(licznik);
}
