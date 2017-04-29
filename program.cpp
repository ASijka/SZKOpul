#include <iostream>
#include <vector>

using namespace std;

int main()
{
		int n;
		cin>>n;
		char tab[n];
		vector<char> nawiasy;
		
		
		int licznik1=0;
		int licznik2=0;
		int licznik3=0;
		int licznikmax=0;
		
		for(int i=0;i<n;i++)
		{
				cin>>tab[i];
				switch(tab[i])
				{
						case '{':
							licznik1++;
							nawiasy.push_back(tab[i]);
							break;
						case '}':
							licznik1--;
							if(licznik1<0)
							{
									cout<<"NIE";
									return 0;	
							}
							if(nawiasy.back()!='{')
							{		
									cout<<"NIE";
									return 0;	
							}
							else
							{
									nawiasy.pop_back();
							}
							break;
						case '(':
							licznik2++;
							nawiasy.push_back(tab[i]);
							break;
						case ')':
							licznik2--;
							if(licznik2<0)
							{
									cout<<"NIE";
									return 0;	
							}
							if(nawiasy.back()!='(')
							{		
									cout<<"NIE";
									return 0;	
							}
							else
							{
									nawiasy.pop_back();
							}
							break;
						case '[':
							licznik3++;
							nawiasy.push_back(tab[i]);
							break;
						case ']':
							licznik3--;
							if(licznik3<0)
							{
									cout<<"NIE";
									return 0;	
							}
							if(nawiasy.back()!='[')
							{		
									cout<<"NIE";
									return 0;	
							}
							else
							{
									nawiasy.pop_back();
							}
							break;
						default:
							break;					
				}	

				int sumaakt=licznik1+licznik2+licznik3;
				if(sumaakt>licznikmax)
				{
						licznikmax=sumaakt;
				}
		}
		if(nawiasy.size()==0)
		{
					cout<<licznikmax;
		}
		else
		{
					cout<<"NIE";
		}
		return 0;
}
