#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t; 
    cin >> t; 
    for (int i=0; i<t; ++i)
	{
        int a,b,s1=0,s2=0;
        cin >> a >> b;
        for (int i=1; i<=sqrt(a); i++)
		{
            if (a%i==0)
			{
                int j=a/i;
                if (i==j)
				{
                    s1+=i;
                } 
				else 
				{
                    s1 +=i+j;
                }
            }
        } 
		for (int i=1; i<=sqrt(b); i++)
		{
            if (b%i==0)
			{
                int j=b/i;
                if (i==j)
				{
                    s2+=i;
                } 
				else 
				{
                    s2 +=i+j;
                }
            }
        }
        if(s1==s2)
        	cout<<"YES"<<endl;
        else
        	cout<<"NO"<<endl;
        
    }
    return 0;
}
