#include <iostream>

using namespace std;

//int drzewko=1000000;

int main()
{
		int n;
		cin>>n;
		
		int* tab=new int[1000000];
		int licznik=0;
		int tmp;
		
		for(int i=0;i<1000000;i++)
				tab[i]=0;
		
		for(int i=0;i<n;i++)
		{
				cin>>tmp>>tmp;
				if(tab[tmp-1]<=0)
						licznik++;
				tab[tmp-1]++;		
		}
		
		cout<<licznik;
		
		return 0;
}
