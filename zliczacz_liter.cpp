#include <iostream>

using namespace std;

int tab[123];

void g(string w)
{
    	for (int i = 0; i < int(w.size()); i ++)
		{
        	if (w[i] != ' ') 
			{
          	  	tab[int(w[i])]++;
        	}
    	}
}


int main()
{   
    	int t;
    	
    	cin >> t;
    	
    	cin.ignore();
    	
    	for (int i = 0;i < t; i++)
		{
      	  		string e;
    	    	getline(cin,e);
    	    	g(e);
    	}
   		
		for (int i = 97;i < 123; i ++)
		{
   	     		if (tab[i] != 0)  
				{
   	         			cout << char(i) << " " << tab[i] << endl;
   	     		}
   	 	}
   	 
		for (int i = 65;i < 91; i ++)
		{
   	     	if (tab[i] != 0)  
		 	{
   	         	cout << char(i) << " " << tab[i] << endl;
   	        }
   	 	}
    
	return 0;
}
