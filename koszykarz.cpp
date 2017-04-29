#include <iostream>
#include <cmath>

using namespace std;

int main()
{
		long long a,b,c;
		cin>>a>>b>>c;
		
		long long liczba=b-a;
		
		if(liczba%c==0)
				cout<<liczba/c;
		else
				cout<<liczba/c+1;		
		
		return 0;
}
