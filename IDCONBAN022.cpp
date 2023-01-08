#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,k;
		cin>>x>>y>>k;
		int sum=k/x;
		
		while(y!=0)
		{
			sum+=y;
			k+=k/y;
		}
	}
}