#include <iostream>
#include <stdlib.h>
#include <sstream>

using namespace std;

int modular(unsigned long long base, unsigned long long exp, unsigned long long mod)
{
    unsigned long long x = 1;
    unsigned long long power = base % mod;

    for (int i = 0; i < sizeof(int) * 8; i++) {
        int least_sig_bit = 0x00000001 & (exp >> i);
        if (least_sig_bit)
            x = (x * power) % mod;
        power = (power * power) % mod;
    }

    return x;
}

int main()
{
		string i;
		
		cin>>i;
		
		if(i=="0")
		{
				cout<<"1";
				
	    }
	    else if(i=="1")
		{
			cout<<"2";
		}
		else if(i=="2")
		{
			cout<<"4";
		}
		else if(i=="3")
		{
			cout<<"8";
		}
		else
		{
			int dl = 100;
			while(dl >= 9)
			{
				dl = i.length();
				string tmp = i.substr(0, 8);
				int j;
				sscanf(i.c_str(), "%d", &j);
				int mod = j%4;
				ostringstream ss;
				ss << mod;
				string str = ss.str();
				i.erase (0,8); 
				i=str+i;
			}
			
			int j;
			sscanf(i.c_str(), "%d", &j);
			int res = j%4;
		
		
			if(res==0)
			{
					cout<<"6";
			}
			else if(res==1)
			{
					cout<<"2";
			}
			else if(res==2)
			{
					cout<<"4";
			}
			else if(res==3)
			{
					cout<<"8";
			}
			
	    }
		
		return 0;
}



