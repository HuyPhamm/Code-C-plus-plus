#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin >>t;
	for(int i=0;i<t;i++)
	{
		int N = 1e6-1;
 	    bool check[N + 1];
  		for (int i = 2; i <= N; i++) 
		{
    		check[i] = true;
  		}
  		for (int i = 2; i <= N; i++) 
		{
    		if (check[i] == true) 
			{
      			for (int j = 2 * i; j <= N; j += i)
				{
        			check[j] = false;
      			}
    		}
  		}
		int l;
		cin >> l;
		int dem=0;
		for(int i=1;i<=l;i++)
		{
			if(check[i]==1)
			{
				int count=0;
				string x=to_string(i);
				for(int k=0;k<=x.length();k++)
				{
					if(x[k]=='2' || x[k]=='3' || x[k]=='5' || x[k]=='7')
						count++;
				}
				if(count==x.length())
					dem++;
			}
		}
		cout<< dem <<endl;
	}
	return 0;
}
