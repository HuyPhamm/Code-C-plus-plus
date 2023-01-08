#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		string x;
		string hex="0123456789ABCDEF";
		int count=0;
		int i=0;
		while(n>0)
		{
			x[i++]=hex[n%16];
			n/=16;
		}
		while(i--)
				cout<<x[i];
		cout<<endl;
	}
}