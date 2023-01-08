#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef unsigned long long ull;

const int   N = 1000001;
int         n,t,k;
char        res[2*N];

int main() 
{
	int t;
	cin>>t;
	while (t--) 
	{
		int n;
		cin>>n;
		int k = 0;
		for (int i=1; i<2*n; i++) 
		{
			if (i <= n)
				k += i;
			else
				k += 2*n-i;
			res[2*n-i] = k % 10 + 48;
			k /= 10;
		}
		for (int i=1; i<2*n; i++) 
			cout<<res[i];
		cout<<endl;
	}

	return 0;
}