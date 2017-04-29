#include <iostream>
#include <cstdlib>
#include <string>  

using namespace std;

int sprawdz(char a)
{
		if(a>'0'+9 || a < '0')
				return 0;
		
		return 1;
}

int strToInt(string s)
{
     int tmp = 0, i = 0;
     bool m = false;
     if(s[0] == '-') {
      m = true;
      i++;
     }
     for(; i < s.size(); i++)
      tmp = 10 * tmp + s[i] - 48;
     return m ? -tmp : tmp;   
}

int main()
{
		int n;
		
		cin>>n;
		
		long long wynik=0;
		
		string tab;
		
		cin>>tab;
		
		string tmp="";
		
		int warunek=0;
	
		for(int i=0;i<n;i++)
		{
				if(sprawdz(tab[i])==1)
				{
						warunek=1;
						tmp+=tab[i];
						if(i==n-1)
						{
								wynik+=strToInt(tmp);	
						}
				}
				else
				{
						if(warunek==1)
						{
								wynik+=strToInt(tmp);
								tmp="";
								warunek=0;
								
						}
					
				}
		}
		cout<<wynik;
		
		return 0;
}
