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
		float sum1=0;
		int m=1;
		float j=2.000;
		for(int i=1;i<=n;i++)
		{
			m*=i;
			sum1+=pow(m,1/j);
			cout<<sum1;
		}
	}
}