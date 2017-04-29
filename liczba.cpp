#include <iostream>

using namespace std;

int main()
{
		int n;
		cin>>n;
		
		int min,max;
		
		for(int i=1;i<n;i++)
				if(n%i!=0)
				{
						min=i;
						break;
				}			
				
		for(int i=n-1;n>1;i--)
				if(n%i!=0)
				{
						max=i;
						break;
				}		
		
		cout<<min<<" "<<max;
		
		return 0;
}
