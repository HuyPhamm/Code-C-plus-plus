#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
		int n, k;
	    cin >> n >> k;
	    if(k == 0) 
		{
	        for(int i = 1; i <= n; i++) 
			{
	            cout << i << ' ';
	        }
	    } else if(n % 2 != 0) {
	        cout << "-1";
	    } else {
	        if((n / 2) % k) {
	            cout << "-1";
	        } else {
	            int t = (n / 2) / k;
	            for(int i = 0; i < t; i++) {
	                for(int j = k + 1 + i * 2 * k; j <= 2 * k + i * 2 * k; j++)
	                    cout << j << " ";
	                for(int j = 1 + i * 2 * k; j <= k + i * 2 * k; j++)
	                    cout << j << " ";
	            }
	        }
	    }
	    cout << endl;
	}
}