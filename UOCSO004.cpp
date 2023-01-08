#include"iostream"
#include"math.h"
using namespace std;
int check(long long n){
	if(n<2)
	{
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			int dem=0;
			while(n%i==0)
            {
				n/=i;
				dem++;
				if(dem >1)
					return 1; 	
			}
		}
	}
	return 0;
}

int main()
{
	unsigned int t;	cin >>t;
	while(t--)
	{
		long long n;
		cin >> n;
		if(check(n)==1)
			cout<< "YES" <<endl;
		else 
			cout<< "NO" <<endl;
		
	}
	return 0;
}
