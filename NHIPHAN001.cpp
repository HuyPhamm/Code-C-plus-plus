#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a1, a2;
        cin >> a1 >> a2;
        double sum1 = 0;
        double sum2 = 0;
        for (int i = 0; i < n; i++)
        {
        	if(a1[i]=='1')
            	sum1 = sum1 + (double)pow(2, n-i-1);
    	}
        for (int i = 0; i < n; i++)
        {
			if(a2[i]=='1')
            sum2 = sum2 + (double)pow(2,n-i-1);
    	}
        if (sum1 > sum2)
        {
            unsigned long long temp = sum1;
            sum1 = sum2;
            sum2 = temp;
        }
        cout << fixed<<setprecision(0)<<(sum2 - sum1) - 1 << endl;
    }
}