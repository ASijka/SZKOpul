#include <iostream>

using namespace std;

int main()
{
		int n;
		cin>>n;
		char tab[n];

		for(int i=0;i<n;i++)
		{
				cin>>tab[i];
		}
		int licznik=0;
		if(n>2)
			for(int i=1;i<n;i++)
			{
					if(i<n-1)
					{				
						if(tab[i]==tab[i-1])
						{
								licznik++;
								if(tab[i-1]=='A' && tab[i+1]=='B')
										tab[i]='C';
								else if(tab[i-1]=='A' && tab[i+1]=='C')
										tab[i]='B';	
								else if(tab[i-1]=='B' && tab[i+1]=='C')
										tab[i]='A';	
								else if(tab[i-1]=='B' && tab[i+1]=='A')
										tab[i]='C';	
								else if(tab[i-1]=='C' && tab[i+1]=='A')
										tab[i]='B';	
								else if(tab[i-1]=='C' && tab[i+1]=='B')
										tab[i]='A';		
								else if(tab[i-1]=='A' && tab[i+1]=='A')
										tab[i]='B';		
								else if(tab[i-1]=='B' && tab[i+1]=='B')
										tab[i]='A';		
								else if(tab[i-1]=='C' && tab[i+1]=='C')
										tab[i]='A';																
						}
					}
					else 
					{
							if(tab[n-2]=='A' && tab[n-1]=='A' || tab[n-2]=='B' && tab[n-1]=='B' || tab[n-2]=='C' && tab[n-1]=='C')
									licznik++;	
					}	
			}	
		else
		{
			if(tab[0]=='A' && tab[1]=='A' || tab[0]=='B' && tab[1]=='B' || tab[0]=='C' && tab[1]=='C')
					licznik++;		
		}

		cout<<licznik;
		
		return 0;
}


