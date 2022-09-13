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
		int a[1000];
		for(int i=1;i<=n;i++)
			a[i]=i;
		for(int i=1;i<n;i++)
			cout << i << endl;
		do
		{
			for(int i=1; i<=n; i++)
				cout<<a[i]<<(i<n?" ":"\n");
		}
		while(next_permutation(a+1, a+1+n));
	}
}
