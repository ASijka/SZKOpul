#include <iostream>

using namespace std;

int main()
{

	   int x,k,a;
		cin>>x>>k>>a;
		
		if(x%(k+a)==0 || x%(k+a)<k)
		{
				cout<<"1";
				return 0;
		}
		else
		{
				cout<<"0";
				return 0;
		}
		
		
		return 0;

}
