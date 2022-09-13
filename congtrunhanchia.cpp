#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    if(a==0)
        cout <<"NO";
    else if(a==0 && b==0)
        cout <<"INF";
    else if(a!=0)
        cout <<fixed<< setprecision(2)<<static_cast<double>(-b) / a ;
}
