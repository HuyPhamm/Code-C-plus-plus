#include <bits/stdc++.h>

#define FOR(i, l, r) for(int i = l; i <= r; ++i)
#define FOD(i, l, r) for(int i = l; i >= r; --i)

#define ll long long
#define ug unsigned long long

const int Nmax = pow(10, 6);

using namespace std;
	// Topic variable.
		int	T;
		int	l, r;
	// Auxiliary variable.
		bool	snt[1000100];
		int	ans[1000100];
	//___________________
void seive()
{
	int	i = 2;
	snt[1] = true;
	while (i <= 1000)
	{
		while (snt[i] == true) ++i;
		FOR(j, 2, Nmax / i) snt[i*j] = true;
		++i;
	}
	ans[0] = 0;
	FOR(i, 1, Nmax)
	{
		ans[i] = ans[i-1] + abs((int) snt[i] - 1);
	}
}
int main()
{		
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
		seive();
		cin >> T;
		while (T)
		{
			cin >> l >> r;
			cout << ans[r] - ans[l-1] << endl;
			--T;
		}
	return 0;
}