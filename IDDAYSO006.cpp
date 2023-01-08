#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long n;
		cin>>n;
		unsigned long long a[n];
		unsigned long long xep[n];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			xep[i]=a[i];
		}
		for(int i=1;i<=n;i++)
		{
			while(a[i]>=10)
				a[i]/=10;		
		}

 		for(int i = 1; i <= n - 1; i++)
		{
        	for(int j = i + 1; j <= n; j++)
			{
	            if(a[i]==a[j])
	            {
	            	if()
				}
				
				
				if(a[i] < a[j])
				{
	                unsigned long long tg = a[i];
	                unsigned long long check=xep[i];
	                a[i] = a[j];
	                xep[i]=xep[j];
	                a[j] = tg;   
					xep[j]=check;   
	            }
	    	}
        }
        for(int i=1;i<=n;i++)
			cout<<xep[i];
		cout<<endl;
    }
}