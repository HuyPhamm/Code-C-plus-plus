#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long Catalan=1;
		for(int i=0;i<n;i++)
		{
			Catalan=(float)(2*(2*i+1))/(i+2)*Catalan;
		}
		cout<<Catalan<<endl;		
	}
}