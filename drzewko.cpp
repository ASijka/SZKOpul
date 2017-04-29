#include <iostream>
 
using namespace std;
 

int main()
{
	  int n;
	  int il;
	  cin>>n>>il;
	  int w=0;
	  n--;
	  for(int i=0;i<il;i++)
	  {
	  		w=w*2;
	   		w |= n & 1;
	   		n=n/2;
	  }
	  cout<<w;
	  return 0;
}
