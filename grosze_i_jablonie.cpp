#include <iostream>
#include <algorithm>  

using namespace std;

int main()
{
		int n;
		cin>>n;
		
		int tab[n];
		
		for(int i=0;i<n;i++)
		{
				cin>>tab[i];
		}
		
		int maxgrusza;
		int mingrusza;
		int maxjabko;
		int minjabko;
		
		for(int i=n-1;i>0;i--) //max grusza
		{
				if(tab[i]==0)
				{
						maxgrusza=i;
						break;						
				}
		}
		
		for(int i=0;i<n;i++) // min grusza
		{
				if(tab[i]==0)
				{
						mingrusza=i;
						break;						
				}
		}
		
		for(int i=n-1;i>0;i--) // max jabko
		{
				if(tab[i]==1)
				{
						maxjabko=i;
						break;		
				}
		}
		
		for(int i=0;i<n;i++) // min jabko
		{
				if(tab[i]==1)
				{
						minjabko=i;
						break;		
				}
		}
		
		int wynik1=(maxgrusza-minjabko);
		int wynik2=(maxjabko-mingrusza);
		
		cout<<max(wynik1,wynik2);
		
		return 0;
}
