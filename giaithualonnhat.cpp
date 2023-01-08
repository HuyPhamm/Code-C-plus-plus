#include<bits/stdc++.h>
using namespace std;
char a[40000]={'0'};

void factorial(int n)
{
	memset(a ,'0',40000);
	a[0]='1';
	int i,j;
	int len=1,temp=0;
	for(i=2;i<=n;i++)
	{
		for(j=0;j<len || temp!=0;j++)
		{
			temp+=(a[j]-'0')*i;
			a[j]=temp%10 +'0';
			temp/=10;
		}
		len=j;
	}
	for(i=len-1;i>=0;i--)
		cout<<a[i];
	cout<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		factorial(n);
		
	}
}