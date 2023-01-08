#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string x;
		cin >> x;
		long long sum=0;
		for(int i=0;i<x.length();i++)
		{
			if(x[i]=='1')
				sum+=(long long) pow(2,x.length()-i-1);
		}
		cout << sum <<endl;
		
	}
}