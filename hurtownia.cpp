#include <iostream>
 
using namespace std; 
 
int ile[300];
bool czy[300];

int main()
{
	    int n;
    	scanf("%d",&n);
    	for(int x=0;x<n;x++)
        {
        		char c,z;
        		int a;
        		scanf(" %c %c%d",&c,&z,&a);
        		if (z=='-') 
					a*=-1;
        		ile[int(c)]+=a; 
        		czy[int(c)]=1;
        }
    for(int x=0;x<300;x++)   
    {
    	    if (czy[x]) printf("%c %d\n",char(x),ile[x]);   
    }
    return 0;
}
