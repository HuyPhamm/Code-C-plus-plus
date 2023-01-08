#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;
void calculate(int&n , int x)
{
	float S=0;
	for(int i=1;i<=n;i++)
	{
		S = sqrt(S+pow(x,i));
	}
	cout<<fixed<<setprecision(3)<<S<<endl ;
}
int main()
{
	int testcase;
	cin>>testcase;
	while(testcase--)
	{
		int n;
		cin>>n;
		float x;
		cin >> x;
		calculate(n,x);
	}
}
