#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n;
		cin >> n;
		float x;
		cin >> x;
		double s=0.000;
		int j=0;
		if(1<=n<=20)
		{
			for(int i=1;i<=n;i++)
			{
				s+=(pow(x,i))/(j+=i);
			}
			cout << setprecision(3) <<fixed << s<<endl;
		}
	
	}
}
