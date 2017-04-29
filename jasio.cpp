#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

const int nmax=10000;
const int lenmax=202;

int main()
{
		int ok;
		int okj;
		int counted;
		int n;
		int c0;
		int c1;
		int c2;
		int wynik=0;
		int wynikjasia=0;
		char s[nmax][lenmax];
		cin>>n;
		for(c1=0;c1<n;c1++)
		{
			cin>>s[c1];
			counted=0;
			ok=0;
			okj=0;
			c2=0;
			for(c2=0;c2<strlen(s[c1])-1;c2++)
			{
				if(s[c1][c2]==s[c1][c2+1] || s[c1][c2]==s[c1][c2+2]) ok=1;
				if(s[c1][c2]==s[c1][c2+1] || s[c1][c2]==s[c1][c2+2] ||
				   (s[c1][c2]=='i' && s[c1][c2+1]=='j') || (s[c1][c2]=='j' && s[c1][c2+1]=='i') || 
				   (s[c1][c2]=='b' && s[c1][c2+1]=='d') || (s[c1][c2]=='d' && s[c1][c2+1]=='b') ||
				   (s[c1][c2]=='b' && s[c1][c2+1]=='d') || (s[c1][c2]=='d' && s[c1][c2+1]=='b') ||
				   (s[c1][c2]=='b' && s[c1][c2+1]=='p') || (s[c1][c2]=='p' && s[c1][c2+1]=='b') ||
				   (s[c1][c2]=='d' && s[c1][c2+1]=='p') || (s[c1][c2]=='p' && s[c1][c2+1]=='d') ||
				   (s[c1][c2]=='i' && s[c1][c2+2]=='j') || (s[c1][c2]=='j' && s[c1][c2+2]=='i') || 
				   (s[c1][c2]=='b' && s[c1][c2+2]=='d') || (s[c1][c2]=='d' && s[c1][c2+2]=='b') ||
				   (s[c1][c2]=='b' && s[c1][c2+2]=='d') || (s[c1][c2]=='d' && s[c1][c2+2]=='b') ||
				   (s[c1][c2]=='b' && s[c1][c2+2]=='p') || (s[c1][c2]=='p' && s[c1][c2+2]=='b') ||
				   (s[c1][c2]=='d' && s[c1][c2+2]=='p') || (s[c1][c2]=='p' && s[c1][c2+2]=='d')) okj=1;
			}
			if(ok==1) wynik++;
			if(okj==1) wynikjasia++;
		}
		cout<<wynik<<endl<<wynikjasia;
		return 0;
}


