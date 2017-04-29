#include <iostream>

using namespace std;

void dec_to_bin(int liczba)
{
	  int i=0,tab[31];
	 
	  while(liczba) 
	  {
	    tab[i++]=liczba%2;
	    liczba/=2;
	  }
	 
	  for(int j=i-1;j>=0;j--)
	    cout<<tab[j];
}

int main()
{
		int n;
		cin>>n;
		int tab[n];
		
		for(int i=0;i<n;i++)
				cin>>tab[i];
				
		for(int i=0;i<n;i++)
		{
				dec_to_bin(tab[i]);
				cout<<endl;
		}
				
		return 0;				
}
