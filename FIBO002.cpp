#include<bits/stdc++.h>
using namespace std;
unsigned long long fibochan(int n)
{
	if (n < 1)
    	return n;
    if (n == 1)
    	return 2;
	else
		return 4*fibochan(n-1)+fibochan(n-2);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long sum=0;
		unsigned long long n;
		cin>>n;
		for(int i=11;i<2000;i++)
		{
			if(fibochan(i)%2==0)
			{
				if(n>=fibochan(i))
					sum+=fibochan(i);
				if(n<fibochan(i))
					break;
			}
		}
		cout<<sum<<endl;
	}
}