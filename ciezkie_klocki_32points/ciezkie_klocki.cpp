#include <iostream>

using namespace std;

int szukaj(int tab[],int pocz,int kon,int n)
{
		if(pocz<0 || kon>=n)
		{
				cout<<"pocz="<<pocz<<" kon="<<kon<<endl;
				return -1;
		}
		
		int max_val=-1;
		int max_ind=-1;
		
		for(int i=pocz;i<kon;i++)
				if(tab[i]>max_val)
				{
						max_val=tab[i];
						max_ind=i;
				}
				
		return max_ind;
}

int main()
{
		ios_base::sync_with_stdio();
		int n;
		cin>>n;
		
		int tab[n];
		
		for(int i=0;i<n;i++)
				cin>>tab[i];
			
		int counter=n;
		int pocz=0;
		int kon=n-1;		
		int licznik=0;
				
		while(counter>0)
		{
				int max=szukaj(tab,pocz,kon,n);
				if(max==-1)
						return -1;
				if(max-pocz+1>kon-max)
						pocz=max+1;  // TODO czy nie wychodzimy po za tablice?
				else if(max-pocz+1<kon-max)
						kon=max;
				else	
				{
						//TODO co teraz?
						cout<<"TEST"<<endl;
				}		
						
				counter=kon-pocz;
				licznik++;		
		}		
		
		cout<<licznik;
		
		return 0;
}		return 0;		
}
