#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, S = 0.0;
    int n;
    cin >> x >> n;
    int gt = 1;
    for (int i = 1; i <= n; i++)
    {  
	    S += (pow(x, i) / gt);
	    for (int j = 2; j <= n; j++)
        	gt *= j;
    }
    cout<<fixed<<setprecision(2)<<S;
    return 0;
}
