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
		int count=0;
		if(n%2!=0 && n%3!=0)
			count=-1;
		while(n>0)
		{
			int can=sqrt(n);	
			int check=pow(can,2);
			if(n==1)
			{
				n=0;
				count++;
			}
			else if(check==n)
			{
				n=can;
				count++;
			}
			
				else if(n%3!=0 && n%2!=0)
			{
				n=n-1;
				count++;
			}
			else if(n%3==0)
			{
				n/=3;
				count++;
			}
			else if(n%2==0)
			{
				n/=2;
				count++;
			}
	}
		cout<<count<<endl;
	}
}