#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<int> v;
		long long du=0;
		while(n!=0)
		{
		du=n%2;
			v.push_back(du);
			n/=2;
		}
		for(int i=v.size()-1;i>=0;i--)
		{
			cout<<v[i];
		}
		cout<<endl;
	}
	return 0;
}