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
		int a[1000];
		int s=0;
		int sum=0;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				s+=a[j];	
			}
			if(i==0)
			{
				sum=s;
				s=0;
			}
			else if(i!=0)
			{
				if(sum<s)
					sum=s;
				s=0;
			}		
		}
		cout<<sum<<endl;
		
	}
}