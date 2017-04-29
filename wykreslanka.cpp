#include <iostream>

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
	    
	    int licznik=0;
	    int tmp=1;
	    
	    for(int i=0;i<n;i++)
	    {
		        if(tab[i]!=tmp)
		        {
		            licznik++;
		        }
		        else
		        {
		            tmp++;
		        }
	    }
	    
	    cout<<licznik;
	    
	    return 0;
}
