#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1000];
    int count=0;
    int avg=0;
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
    {
    	if(a[i]%2!=0 )
    	{
    		avg+=a[i];
    		count++;
		}
    		
	}
        
    cout << setprecision(4) << fixed << (float)avg/count;
        
}
