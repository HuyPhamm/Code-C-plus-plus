#include <bits/stdc++.h>
 
using namespace std;
 
int sumOfLargePrimeFactor(int n)
{
    int prime[n+1], sum = 0;
    memset(prime, 0, sizeof(prime));
    int max = n / 2;
    for (int p=2; p<=max; p++)
    {

        if (prime[p] == 0)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = p;
        }
    }
    for (int p=2; p<=n; p++)
    {
        if (prime[p]!=0)
            sum += prime[p];      
        else
            sum += p;
    }
     
    return sum;     
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	cout << sumOfLargePrimeFactor(n)<<endl;
	}
    return 0;        
}