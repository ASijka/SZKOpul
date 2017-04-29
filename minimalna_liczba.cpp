#include <iostream>

using namespace std;

int main()
{
		ios_base::sync_with_stdio(0);
		
		unsigned long long n,k;
		cin>>n>>k;
		
		long long tab[n];
		
		for(int i=0;i<n;i++)
				cin>>tab[i];
				
//		long long  max=0;
		
//		for(int i=0;i<n;i++)
//				if(tab[i]>max)
//						max=tab[i];
						
//		if(max%k==0)
//				max=max/k;		
//		else
//				max=(max+(k-(max%k)))/k;
		
		unsigned long long max=3000000;
				
		unsigned long long* wyniki = new unsigned long long[max];
								
		for(int i=0;i<n;i++)
		{
				if(tab[i]%k==0 && tab[i]/k<3000000)
				{
						wyniki[tab[i]/k-1]=1;
				}
		}		
		
		for(int i=0;i<max;i++)
		{
				if(wyniki[i]==0)
				{
						cout<<(i+1)*k;
						return 0;
				}
		}
		
		cout<<max*k+k;
		
		//cout<<endl;
//				
//		for(int i=0;i<max;i++)
//				cout<<wyniki[i]<<" ";				
//				
//		cout<<endl;
//		cout<<max;
		
		return 0;		
				
}


