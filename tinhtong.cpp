#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    cin>>n;
    double s=0;
    while(n!=1)
    {
        s+=1/n;
        n--;
    }
       cout << fixed<<setprecision(2)<<s;
}
