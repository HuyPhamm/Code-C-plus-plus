#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		long long m=pow(10,n-1);
		long long k=pow(10,n);
		if(n==1)
		{
			cout << 0 << endl;
			continue;
		}
		if(n%2!=0)
		{
			cout <<m<< endl;
			continue;
		}
		else if(n%2==0)
		{
			for(long long i=pow(10,n-1);i<k;i++)
			{
				long long x=sqrt(i);
				if(pow(x,2)==i)
				{
					cout << i <<endl;
					break;
				}
	
			}
		}
	}
}

