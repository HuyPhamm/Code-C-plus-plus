#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		long long a[n];
		memset(a,0,sizeof(a));
		a[0]=1;
		if(n==0)
		{
			cout << 1;
			continue;
		}
		for(int i=1;i<=n;i++)
		{
			a[i]=a[i-1]*i;
		}
		cout << a[n] <<endl;
	}
}