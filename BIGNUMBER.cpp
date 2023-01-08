#include<bits/stdc++.h>
#define MAX 1000
using namespace std;
void inra(int a[MAX])
{
	int i,j;
	for(i=MAX-1;i>=0;i--)	
	if(a[i]!=0) 
		break;
	for(int j=i;j>=0;j--)
		cout<<a[j];
	cout<<endl;
}
void tinh(int n,int k)
{
	int a[MAX]={0},i,j,x,du=0;
	a[0]=1;
	if(n>=0)
	{
		for(int i=0;i<k;i++)
		{
			for(int j=0;j<MAX-1;j++)
			{
				x=(a[j]*n+du)/10;
				if(a[j]*n+du>=10)
				{
					a[j]=(a[j]*n+du)%10;
					du=x;
				}
				else if(a[j]*n+du<10)
				{
					a[j]=(a[j]*n+du)%10;
					du=0;
				}
			}
		}
		inra(a);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		tinh(n,k);
	}
	
}