#include <iostream>

using namespace std;

void displaytab(int tab[])
{
	for(int i=0;i<6;i++)
	{
	    cout<<tab[i]<<",";
	}
	cout<<endl;
}

void swap(int i,int j, int *a){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}


void quicksort(int *arr, int left, int right){
    int min = (left+right)/2;

    int i = left;
    int j = right;
    int pivot = arr[min];

    while(left<j || i<right)
    {
        while(arr[i]<pivot)
        i++;
        while(arr[j]>pivot)
        j--;

        if(i<=j){
            swap(i,j,arr);
            i++;
            j--;
        }
        else{
            if(left<j)
                quicksort(arr, left, j);
            if(i<right)
                quicksort(arr,i,right);
            return;
        }
    }
}

void sortowanie_babelkowe(int* tab,int n)
{
	  int pom;
	 
	  for(int i=0;i<n;i++)
	    for(int j=0;j<n-i-1;j++)
	    if(tab[j]>tab[j+1])
	    {
	      pom = tab[j];
	      tab[j] = tab[j+1];
	      tab[j+1] = pom;
	    }
}

int main()
{
		int n;
		int k;
		
		cin>>n>>k;
		
		int tab2[6];
	
		for(int i=0;i<6;i++)
				tab2[i]=0;

		int tmp;
		for(int i=0;i<n;i++)
		{
				cin>>tmp;
				tab2[tmp-1]++;
		}
	
		int wieksze=0;
		int licznik=0;
		int test=0;
		
		for(int i=0;i<6;i++)
				if(tab2[i]>0)
						wieksze++;
						
		//displaytab(tab2);
		
		quicksort(tab2, 0, 5);
		
		//displaytab(tab2);
		
		if(k==wieksze)
		{
			cout<<0;
			return 0;
		}
		
		if(wieksze<k)
		{
				cout<<k-wieksze;
				return 0;
		}
		else
		{
				for(int i=0;i<6-k;i++)
						licznik+=tab2[i];
						
				cout<<licznik;								
				return 0;
		}
}
