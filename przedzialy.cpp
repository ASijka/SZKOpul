#include <iostream>
#include <vector>

using namespace std;

struct wieze
{
		int x;
		int y;
};

void Sortowanie( wieze tab[],int left,int right )
{
    int i = left;
    int j = right;
    int x = tab[( left + right ) / 2 ].x;
    do
    {
        while( tab[ i ].x < x )
             i++;
        
        while( tab[ j ].x > x )
             j--;
        
        if( i <= j )
        {
            swap( tab[ i ], tab[ j ]);
            
            i++;
            j--;
        }
    } while( i <= j );
    
    if( left < j ) Sortowanie( tab, left, j );
    
    if( right > i ) Sortowanie( tab, i, right );
    
}

int main()
{
		ios_base::sync_with_stdio(0);
		int n;
		cin>>n;
		
		wieze tab[n];
		
		for(int i=0;i<n;i++)
				cin>>tab[i].x>>tab[i].y;
		
		Sortowanie(tab,0,n-1);
			
		int x_biezocy=tab[0].x;
		int y_biezocy=tab[0].y;	
			
		vector <int> wyniki_x;
		vector <int> wyniki_y;
		
		for(int i=1;i<n;i++)
		{
				if(tab[i].x>y_biezocy)
				{
						wyniki_x.push_back(x_biezocy);
						wyniki_y.push_back(y_biezocy);
						x_biezocy=tab[i].x;
						y_biezocy=tab[i].y;
				}
				else if(tab[i].x<=y_biezocy)
				{
						if(tab[i].y<y_biezocy)
							 	y_biezocy=y_biezocy;
						else
								y_biezocy=tab[i].y;
				}					
		}	
		
		wyniki_x.push_back(x_biezocy);
		wyniki_y.push_back(y_biezocy);
		
		for(int i=0;i<wyniki_x.size();i++)
		{
				cout<<wyniki_x[i]<<" "<<wyniki_y[i]<<endl;
		}
						
		return 0;		
}
