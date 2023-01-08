#include<bits/stdc++.h>
using namespace std;
int C(int n, int k) 
{
    if (k == 0 || k == n) 
		return 1;
    if (k == 1) 
		return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,m;
		cin>>n>>k>>m;
		if(m>0)
		{
			unsigned long long kq=C(n,k);
			cout<<kq%m<<endl;
		}
	}
}