#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long long a, b;
        cin >> a >> b;
        long long sum=0;
        for (long long i = 1; i < sqrt(a); i++)
        {
            if (a % i == 0)
            {
               if(b%i!=0){
               	sum+=i;
               }
               long long z=a/i;
               if(b%z!=0){
               	sum+=z;
               }
            }
        }
        long long x=sqrt(a);
        if(x*x==a&&b%x!=0){
        	sum+=x;
        }
        cout << sum << endl;
    }
}