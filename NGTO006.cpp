#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
	int res;
	for(int i=2;i<=sqrt(n);i++)
	{
		while(n%i==0)
		{
			res=i;
			n/=i;
		}
	}
	if(n!=1)
		res=n;
	return res;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int count=n;
		while(count!=0)
		{
			n=count;
			if(sqrt(count)<solve(n))
			{
				cout<<count<<endl;
				break;
			}
			count--;
		}
	}
}
