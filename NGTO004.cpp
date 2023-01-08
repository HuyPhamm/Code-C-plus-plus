#include<bits/stdc++.h>
using namespace std;
bool nguyento(long long n)
{
	if(n<2)
		return false;
	else
	{
		long long m=sqrt(n);
		int i=2;
		while(n%i and i<m)
			i++;
		if(i>m)
			return true;
		else
			return false;
	}	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n; 
		long long x=n+1;
		if(nguyento(x)==0)
			x++;
		cout<<x<<endl;
	}
}