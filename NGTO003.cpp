#include<bits/stdc++.h>
using namespace std;
int songuyento(long long n){
	if(n<2)
	{
		return 0;
	}
	if(n%2==0)
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0){
				return 0;
			}
		}
	}
	if(n%2!=0)
	{
		for(int i=3;i<=sqrt(n);i+=2)
		{
			if(n%i==0){
				return 0;
			}
		}	
	}
	return 1;
}
int main()
{
	int t;
	cin >>t;
	while(t--)
	{
  		long long n;
  		cin>>n;
  		long long x=n;
        if(n%2==0) x+=1;
  		while(true)
		{
  			if(songuyento(x)==1)
			{
  				if(songuyento(x-2)==1)
				{
  					cout<<x<<endl;
  					break;
  				}	
  			}
  			x=x+2;
		}
	}
}
