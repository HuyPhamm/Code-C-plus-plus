#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<string> v;
	for(int i=0;i<n;i++)
		cin>>v[i];
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(0<=v[j].find("v[i]")<10000)
			{
				count++;
				break;
			}
		}
	}
	if(count==n)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
	