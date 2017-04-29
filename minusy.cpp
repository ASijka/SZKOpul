#include <iostream>

using namespace std;

int main()
{
		ios_base::sync_with_stdio(0);

		int n;
		cin>>n;
		char tab[n-1];
	
		for(int i=0;i<n-1;i++)
				cin>>tab[i];
				
		int licznik=0;
				
		for(int i=0;i<n-1;i++)
		{
				if(tab[i]=='-')
				{
						if(licznik>0)
						{
								cout<<"(";
								for(int i=0;i<licznik;i++)
										cout<<"-";
								cout<<")";
								cout<<"-";	
								licznik=0;
						}
						else
						cout<<"-";
						continue;
				}
				if(tab[i]=='+')
				{
						licznik++;
				}
		}
		if(licznik>0)
		{
				cout<<"(";
				for(int i=0;i<licznik;i++)
						cout<<"-";
				cout<<")";
		}
		
		
		return 0;
