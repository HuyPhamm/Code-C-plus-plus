#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		queue<pair<int,int> >dq;
		dq.push({n,0});
		set<int>check;
		while(!dq.empty())
		{
			pair<int,int>x;
			x=dq.front();
			dq.pop();
			if(x.first==0)
			{
				cout<<x.second<<endl;
				break;
			}
			if(check.count(x.first-1)==0)
			{
				dq.push({x.first-1,x.second+1});
				check.insert(x.first-1);
			}
			if(x.first%2==0&&check.count(x.first/2)==0)
			{
				dq.push({x.first/2,x.second+1});
				check.insert(x.first/2);
			}
			if(x.first%3==0&&check.count(x.first/3)==0)
			{
				dq.push({x.first/3,x.second+1});
				check.insert(x.first/3);
			}
			int i=sqrt(x.first);
			if(i*i==x.first&&check.count(i)==0){
				dq.push({i,x.second+1});
				check.insert(i);
			}
		}
	}
}