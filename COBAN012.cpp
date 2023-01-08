#include<iostream>
using namespace std;

int Doixung(long long x)
{
	long long dxx = 0,xx=x;
	while(x>0)
	{
		dxx = dxx*10 + x%10;
		x/=10;
	}
	if(dxx==xx)	
		return 1;
	else
		return 0;
}

void Timdoixung (long long n)
{
	long long Ln = n , Rn = n + 1 ;
	while (Doixung(Ln)!=1) 
		Ln--;
	while (Doixung(Rn)!=1) 
		Rn++;
	if( n-Ln == Rn-n)
		cout << Ln << " " << Rn << endl;
	else 
	{
		if(n-Ln < Rn -n)
			cout << Ln << endl;
		else
			cout << Rn << endl;
	}
}
int main()
{	
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin >> n ;
		Timdoixung(n);
	}
	return 0;
}