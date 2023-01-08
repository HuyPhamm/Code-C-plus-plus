#include<iostream>
using namespace std;
void tohop(int i);
long combinatoric(int n, int k) 
{
    long cn  = 1; // n!
    long ck  = 1; // k!
    long cnk = 1; // (n-k)!

    for (int i = 2; i <= n; i++) {
        cn *= i;
        if (i == k) ck = cn;
        if (i == n-k) cnk = cn;
    }

    return cn / (ck * cnk);
}
int x[1000];
int n,k;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>k;
		int count=n;
		long long sum=1;
		cout<<combinatoric(n,k)<<endl;
		x[0]=0;
		tohop(1);
	}
}
void xuat()
{
	cout<<"[";
	for (int i=1;i<=k;i++)
	{
		if(i==k)
		{
			cout<<x[k]<<"]";
			break;
		}
		cout<<x[i]<<" ";
	}
	cout<<endl;
}
void tohop(int i)
{
	for (int j=x[i-1]+1;j<=n-k+i;j++)
	{
		x[i]=j;
		if (i==k)  		
			xuat();
		else           
			tohop(i+1);
	}
}