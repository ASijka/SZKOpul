#include <iostream>

using namespace std;

int main()
{
		int x,k;
		cin>>x>>k;
		
		if(x>=7*k)
				cout<<7000*k;
		else if(2*x>=7*k)
				cout<<3500*k;
		else if(4*x>=7*k)
				cout<<1750*k;
		else
				cout<<"0";
		
		return 0;								
}
