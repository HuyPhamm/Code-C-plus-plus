#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		string x=to_string(n);
		long long s=0;
		long long a=n;
		while(n>0)
		{
			long long m=n;
			m%=10;
			s+=pow(m,x.length());
			n/=10;
		}
		if(a==s)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
}