#include <iostream>
#include<cmath>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    for(int i=2;i<=sqrt(n);i++)
    {
        int cnt=0;
        while(n%i==0){
            cnt++;
            n/=i;
        }
        if(cnt!=0)
        {
            cout<<i<<"^"<<cnt<<"*";
        }
    }
    if(n>1)
    {
        cout<<n;
    }
    return 0;
}
