#include <iostream>

using namespace std;

int main()
{
		int a,b;
		cin>>a>>b;	
		
		int tab[3];
		
		tab[0]=a+b;
		tab[1]=a-b;
		tab[2]=a*b;
		
		if(tab[0]==tab[1] || tab[0]==tab[2] || tab[1]==tab[2])
		{
				cout<<"NIE";
				return 0;
		}
	
		int max=-2;
		int poz=0;
	
		for(int i=0;i<3;i++)
				if(tab[i]>max)
				{
						max=tab[i];
						poz=i;
				}
		
		if(max<0)
		{
				cout<<"("<<a<<")"<<"+"<<b<<"="<<"("<<max<<")";
				return 0;
		}		
						
		if(poz==0)
		{
			if(a<0 && b>0)
			{
				cout<<"("<<a<<")"<<"+"<<b<<"="<<max;
				return 0;
			}
			if(a<0 && b<0)
			{
				cout<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"="<<max;
				return 0;
			}
			if(a>0 && b<0)
			{
					cout<<a<<"+"<<"("<<b<<")"<<"="<<max;
					return 0;
			}		
			if(a>0 && b>0)
			{
					cout<<a<<"+"<<b<<"="<<max;
					return 0;
			}
		}
		if(poz==1)
		{
			if(a<0 && b>0)
			{
				cout<<"("<<a<<")"<<"-"<<b<<"="<<max;
				return 0;
			}
			if(a<0 && b<0)
			{
				cout<<"("<<a<<")"<<"-"<<"("<<b<<")"<<"="<<max;
				return 0;
			}
			if(a>0 && b<0)
			{
					cout<<a<<"-"<<"("<<b<<")"<<"="<<max;
					return 0;
			}		
			if(a>0 && b>0)
			{
					cout<<a<<"-"<<b<<"="<<max;
					return 0;
			}
		}
		if(poz==2)
		{	
			if(a<0 && b>0)
			{
				cout<<"("<<a<<")"<<"*"<<b<<"="<<max;
				return 0;
			}
			if(a<0 && b<0)
			{
				cout<<"("<<a<<")"<<"*"<<"("<<b<<")"<<"="<<max;
				return 0;
			}
			if(a>0 && b<0)
			{
					cout<<a<<"*"<<"("<<b<<")"<<"="<<max;
					return 0;
			}		
			if(a>0 && b>0)
			{
					cout<<a<<"*"<<b<<"="<<max;
					return 0;
			}
		}
		return 0;						
										
}
