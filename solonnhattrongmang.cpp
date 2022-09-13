#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[1000];
    for(int i=0;i<n;i++)
       	cin >> a[i];
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
        else
            continue;
    }
    cout<<max;
        
    
}
