#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a,b;
		cin >> a >> b;
		long long s=0;
		long long m=0;
		if(1<=a<=b<=109)
		{
			m=(b-a)/1 +1;
			s=((a+b)*m)/2;
		}
		cout << s << endl;
	}
}