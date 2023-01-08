#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		long long sum=0;
		for(int i=0;i<s.length();i++)
		{

			sum+=1;
		}
		if(s[0]=='-')
		{
			cout << sum-1 << endl;
			continue;	
		}
		else
			cout << sum << endl;
	}
}