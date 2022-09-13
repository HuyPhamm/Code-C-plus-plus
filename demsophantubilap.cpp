#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count;
	cin >> count;
	while(count--)
	{
		int n;
		cin >> n;
		int a[n];
		int mp[1000];
		for(int i=0;i<1000;i++)
		{
			mp[i]=0;
		}
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			mp[a[i]]++;
		}
		int ans=0;
		for(int i=0;i<n;i++)
		{
			if(mp[a[i]]>=2)
			++ans;
		}
		cout << ans <<endl;	
	}
}
