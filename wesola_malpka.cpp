#include <iostream>
#include <stdio.h>

using namespace std;

int NWD(int a,int b)
{
	    int c;                    
	    while(b != 0)             
	    {
	        c = a % b;              
	        a = b;                
	        b = c;                
	    }
	    return a;                 
}

int main()
{
    	int z;
	     scanf("%d", &z);
	     
	   	int val;
	   
	    while(z>0)
	    {
	        int n,d;
	        scanf("%d %d", &n ,&d);
	        val=n/NWD(n,d);
	        printf("%d\n", val);
	        --z;
	    
	    }
	    return 0;
}
