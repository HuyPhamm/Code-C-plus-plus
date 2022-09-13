#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s=0;
    if(abs(n)==1)
    {        
        cout<<"YES";
        return 0;
    }
    if(abs(n)<=2)
        cout<<"NO";
   
    for(int i=1;i<n;i++)
    {    	
        if(n%i==0)
            s+=i;
        if(n%i!=0)
 			continue;      	
    }      	
    if(n==s)
        cout <<"YES";
    if(n!=s)
        cout <<"NO";
    
}
