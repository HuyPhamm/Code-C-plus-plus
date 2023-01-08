#include<bits/stdc++.h>

using namespace std;
int n, m, dem;
vector<int> v;

void Try(int current_sum, int before)
{
	for (int i:v)
	{
		if (i >= before)
		{
			if (current_sum + i < n) 
			{
				Try(current_sum + i, i);
		    }
			else if (current_sum + i == n)
			{
				dem++;
				break;
			}
			else break;
		}
	}
}
main()
{
	int T;
	cin >> T;
	while (T--)
	{
		dem = 0;
		cin >> n >> m;
		for (int i = 0; i <= n; i++)
		{
			if (pow(m, i) > n) break;
			v.push_back(pow(m, i));
		}
		Try(0, v[0]);
		cout << dem << endl;
		v.clear();
	}
}