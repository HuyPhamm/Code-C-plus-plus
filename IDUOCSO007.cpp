#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t; 
    cin >> t; 
    for (int i=0; i<t; ++i)
	{
        int a, s=0;
        long long b;
        cin >> a >> b;
        for (int i=1; i<=sqrt(a); i++)
		{
            if (a%i==0)
			{
                int j=a/i;
                if (i==j)
				{
                    s+=i;
                } 
				else 
				{
                    s+=i+j;
                }
            }
        }
        
    }
    return 0;
}
