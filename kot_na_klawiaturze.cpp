#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
		char x;
		int n=0;
		while((x=getchar())!='\n' && n<500000)
		{
				n++;
				if(x=='Q' || x=='W' || x=='E' || x=='R' || x=='T' || x=='Y' || x=='U' || x=='I' || x=='O' || x=='P' || x=='[' || x==']' || x=='\\')
						cout<<"2";
				else if(x=='`' || x=='1' || x=='2' || x=='3' || x=='4' || x=='5' || x=='6' || x=='7' || x=='8' || x=='9' || x=='0' || x=='-' || x=='=')
						cout<<"1";
				else if(x=='A' || x=='S' || x=='D' || x=='F' || x=='G' || x=='H' || x=='J' || x=='K' || x=='L' || x==';' || x=='\'' )
						cout<<"3";
				else if(x=='Z' || x=='X' || x=='C' || x=='V' || x=='B' || x=='N' || x=='M' || x==',' || x=='.' || x=='/')
						cout<<"4";
				//else if(x=='`' || x=='1' || x=='2' || x=='3' || x=='4' || x=='5' || x=='6' || x=='7' || x=='8' || x=='9' || x=='0' || x=='-' || x=='=')
				//		cout<<"5";
				else cout<<"5";
	
		}
		
		return 0;
}
