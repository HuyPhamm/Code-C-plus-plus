#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[1000],b[1000];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<m;i++)
		cin>>b[i];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(b[i]==a[j])
			{
				b[i]=j+1;
				continue;
			}
		}
		
	}
	for(int i=0;i<m;i++)	
		cout<<b[i]<<" ";
}