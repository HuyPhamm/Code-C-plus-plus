#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
	int m, n;
	cin >> m >> n;
	int a[m+5][n+5];
	for (int i = 1; i <= m; ++i)
		for (int j = 1; j <= n; ++j)
			cin >> a[i][j];
	for (int j = 0; j <= n; ++j)
		a[0][j] = a[m + 1][j] =  999999999;
	for (int j = 2; j <= n; ++j)
		for (int i = 1; i <= m; ++i)
			a[i][j] += min(a[i - 1][j - 1], min(a[i][j - 1], a[i + 1][j - 1]));
	int ans = a[1][n];
	for (int i = 2; i <= m; ++i)
		ans =min(ans, a[i][n]);
	cout << ans<<endl;
	}
}