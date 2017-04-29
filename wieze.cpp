#include <iostream>

using namespace std;

int main()
{
		int n;
		cin>>n;
		char tab[n][n];
		
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>tab[i][j];
		int flaga=0, lastcol=0;		
		for(int i=0;i<n;i++)
		{
				for(int w=0;w<n;w++)
					if(tab[i][w]=='W')
					{
						flaga=1;
						break;
					}
							
				if(flaga==1)
				{
						flaga=0;
						continue;
				}
				for(int j=lastcol;j<n;j++)
				{
						for(int k=0;k<n;k++)
							if(tab[k][j]=='W')
							{
									flaga=1;
									break;
							}
						if(flaga==0)
						{
								tab[i][j]='W';
								lastcol=j;
								break;
						}
						else
								flaga=0;
				}
		}
		for(int i=0;i<n;i++)
		{
		
			for(int j=0;j<n;j++)
				cout<<tab[i][j];
			cout<<endl;	
		}
}


