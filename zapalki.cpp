#include <iostream>

using namespace std;

int main()
{
		ios_base::sync_with_stdio(0);
			
		int n;
		cin>>n;
		int tab[n];
		
		for(int i=0;i<n;i++)
				cin>>tab[i];
				
		int wyniki[n];
		
		for(int i=0;i<n;i++)
				wyniki[i]=0;
		
		int poz=0;
		int licznik=0;
		int flaga=0;
		
		for(int i=0;i<n-1;i++)
		{
				if(tab[i]>=tab[i+1])
				{
						if(flaga==0)
						{
								licznik++;
								poz=i;
								flaga=1;
						}
						else
								licznik++;
				}
				else
				{
						wyniki[poz]=licznik;
						poz=0;
						flaga=0;
						licznik=0;
				}
		}		
		
		wyniki[poz]+=licznik;
		licznik=0;
		
		//for(int i=0;i<n;i++)
//				cout<<wyniki[i]<<" ";
		
		for(int i=n-1;i>0;i--)
		{
				if(tab[i]>=tab[i-1])
				{
						if(flaga==0)
						{
								licznik++;
								poz=i;
								flaga=1;
						}
						else
								licznik++;
				}
				else
				{
						wyniki[poz]+=licznik;
						poz=0;
						flaga=0;
						licznik=0;
				}
		}
		wyniki[poz]+=licznik;
		
		int max=0;
		
		for(int i=0;i<n;i++)
				if(wyniki[i]>max)
						max=wyniki[i];		
		//cout<<endl;
//		for(int i=0;i<n;i++)
//				cout<<wyniki[i]<<" ";
	
		cout<<max+1;	
	
		return 0;
}
