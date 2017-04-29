#include <iostream>

using namespace std;

int main()
{
		int fcz,fzu,fn;
		cin>>fcz>>fzu>>fn;
		int pzu,pz,pn,pf,pcz,pp;
		cin>>pzu>>pz>>pn>>pf>>pcz>>pp;
		int x,y,z;
	
		x=max(0,pf+pp+2*pcz-2*fcz);	
		y=max(0,pz+pp+2*pzu-2*fzu);
		z=max(0,pz+pf+2*pn-2*fn);
		
		if(x%2==0)
				cout<<x/2<<" ";
		else
				cout<<x/2<<".5"<<" ";
					
		if(y%2==0)
				cout<<y/2<<" ";
		else
				cout<<y/2<<".5"<<" ";
				
				
		if(z%2==0)
				cout<<z/2<<" ";
		else
				cout<<z/2<<".5"<<" ";
		return 0;						
}
