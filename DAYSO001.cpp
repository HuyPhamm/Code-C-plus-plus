#include<bits/stdc++.h>
using namespace std;

void hamnhap(long long a[],int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i];
}
int kt(long long a[],int n,long long d)
{
	for(int i=2;i<n;i++)
	{
		if(a[i]-a[i-1]!=d)
			return 0;
	}
	return 1;
}
int main()
{
	int n;
	long long a[1000000];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	long long d=a[1]-a[0];
	if(kt(a,n,d)==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;	
}