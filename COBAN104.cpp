#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string x,y;
		cin >> x >> y;
		string x1=x;
		string x2=x;
		string y1=y;
		string y2=y;
		for(int i=0;i<x.length();i++)
		{
			if(x1[i]=='5')
				x1[i]='3';
		}
		for(int i=0;i<y.length();i++)
		{
			if(y1[i]=='5')
				y1[i]='3';
		}
		int Sx1=stoi(x1);
		int Sy1=stoi(y1);
		for(int i=0;i<x.length();i++)
		{
			if(x2[i]=='3')
				x2[i]='5';
		}
		for(int i=0;i<y.length();i++)
		{
			if(y2[i]=='3')
				y2[i]='5';
		}
		int Sx2=stoi(x2);
		int Sy2=stoi(y2);
		cout<<Sx1+Sy1<<" "<<Sx2+Sy2<<endl;
	}
}