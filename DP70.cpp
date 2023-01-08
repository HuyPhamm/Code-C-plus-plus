#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double luythua1=(1+sqrt(5))/2;
	double luythua2=(1-sqrt(5))/2;
	double m=luythua1;
	double k=luythua2;
	double luythua;
	for(int i=0;i<n;i++)
	{
		luythua1*=m;
		luythua2*=k;
	}
	cout<<fixed <<setprecision(0)<<(1/sqrt(5))*(luythua1 -luythua2);
	
}