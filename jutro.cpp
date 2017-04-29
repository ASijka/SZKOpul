#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

struct zadania
{
		int x;
		int y;
};

void Sortowanie( zadania tab[], int left, int right )
{
		    int i = left;
		    int j = right;
		    zadania x = tab[( left + right ) / 2 ];
		    do
		    {
		        while( tab[ i ].y < x.y )
		             i++;
		        
		        while( tab[ j ].y > x.y )
		             j--;
		        
		        if( i <= j )
		        {
		            swap( tab[ i ], tab[ j ] );
		            
		            i++;
		            j--;
		        }
		    } while( i <= j );
		    
		    if( left < j ) Sortowanie( tab, left, j );
		    
		    if( right > i ) Sortowanie( tab, i, right );
    
}

int main()
{
		int n;
		cin>>n;
		
		zadania tab[n];
		
		for(int i=0;i<n;i++)
		{
				cin>>tab[i].x>>tab[i].y;
		}
		
		if(n>1)
			Sortowanie(tab,0,n-1);

		for(int i=n-1;i>0;i--)
		{
				int tmp=tab[i].y-tab[i].x;
				
				if(tmp<tab[i-1].y)
				{
						tab[i-1].y=tmp;
				}
				if(i==1)
				{
						tmp=tab[i-1].y-tab[i-1].x;
						if(tmp<=0)
							cout<<"0";
						else
							cout<<tmp;
				}
		}	
		if(n==1)
			cout<<tab[0].y-tab[0].x;
		
		return 0;
}




