#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    
		int n;
    
		cin>>n;
    
		char tab[1200000];
  	
		scanf("%s", &tab);    
    	
		int p = 0;
    	
		int q = 0;
    	
		for (int i = 0; i < n; i++)
    	{
        
			if (tab[i] == 'Z')
        	{
            		p++;
            		if (p==3)
            		{
                		q++;
                		p=0;
            		}		
        	}
        	
			if (tab[i]== 'W')
        	{
            		if (p)
            		{
                		q++;
                		p=0;
            		}
        }
    	}
    	
		if (p)
    	{
        	q++;
    	}
    	
		cout<<q;
}


