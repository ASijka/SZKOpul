#include <iostream>

using namespace std;

int main()
{
		int n,m;
		
		cin>>n>>m;
		
		char tab[n][m];
		
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<m;j++)
				{
						cin>>tab[i][j];
				}
		}
		
		for(int j=0;j<m;j++)
		{
				for(int i=n;i>0;i--)
				{
						cout<<tab[i-1][j];
				}
  				
				 cout<<endl;	
		}
		
		return 0;
}
