#include<iostream>
#include<bits/stdc++.h>
#include <algorithm>
#include<math.h>
using namespace std;
int main()
{
	long long a,b;
	cin >> a>> b;	
	long long i =__gcd(abs(a),abs(b));
    int tu=a/i;
    int mau=b/i;
    if(mau==1)
    {
    	cout<<tu;
    	return 0;
	}
    if(mau>0)
    	cout<<tu<<" " <<mau;
    if(mau<0)
        cout<<(-1)*tu << " " << (-1)*mau;
    if(mau==0)
        cout<<"INVALID";	
}
