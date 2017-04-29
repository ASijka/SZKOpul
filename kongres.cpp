#include <iostream>

using namespace std;

int main()
{
	    int tab[] {1, 1, 2, 3, 5, 8, 3, 1, 4, 5, 9, 4, 3, 7, 0, 7, 7, 4, 1, 5, 6, 1, 7, 8, 5, 3, 8, 1, 9, 0, 9, 9, 8, 7, 5, 2, 7, 9, 6, 5, 1, 6, 7, 3, 0, 3, 3, 6, 9, 5, 4, 9, 3, 2, 5, 7, 2, 9, 1, 0};
	    
		int liczby;
	    
		cin>>liczby;
	    
		liczby=liczby%60;
	    
		cout<<tab[liczby];
	    
		return 0;
}
