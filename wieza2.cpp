#include <iostream>

using namespace std;
 
int main () {
	  ios_base::sync_with_stdio(0);
	  
	  int schodek, max = 0, osoba, pierwszy_schodek;
	  int n, m;
	  
	  cin >> n >> m;
	  int* tab = new int[n];
	  int* tab2 = new int[m];
	  for (int j = 0; j < n; j++) 
	  {
		    cin >> schodek;
		    if (max < schodek)
		      	max = schodek;
		 
		    tab[j] = max;
	  }
	 
	  for (int j = 0; j < m; j++) 
	  		cin>>tab2[j];
	  int miejsce=n-1;
	  for (int j = 0; j < m; j++) 
	  {
	  	if(miejsce==-1)
	  	cout<<0<<" ";
	  	else{
		  
				  while(tab[miejsce]>=tab2[j])
				  		miejsce--;
				  cout<<miejsce+1<<" ";
				  if(miejsce>=0)
				  		miejsce--;		
			}
	  }
	  return 0;
}
