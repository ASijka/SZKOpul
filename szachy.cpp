#include <iostream>

using namespace std;

int main()
{
		int n;
		cin>>n;		
		int licznik=0;
		int max=0;
		int tmp;
		
		for(int i=0;i<n;i++)
		{
				for(int j=0;j<n;j++)
				{
						cin>>tmp;
						if(tmp>max)
								max=tmp;
				}		
				licznik+=max;
				max=0;
		}
		
		cout<<licznik;
		
		return 0;
}
