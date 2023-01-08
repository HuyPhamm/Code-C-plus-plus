#include <iostream>
using namespace std;


int a[102][102];

int main() 
{
    int t;
    cin>>t;
    while(t--)
	{
	    int m, n;
	    cin >> m >> n;
	    for(int j=0;j<=n;j++)	
			a[0][j] = a[m+1][j] = -1e9;
		for(int i=1;i<=m;i++)
	    {
			for(int j=1;j<=n;j++)
				cin >> a[i][j];
		}
		for(int j=2;j<=n;j++)
	    {
			for(int i=1;i<=m;i++)
			{
	        a[i][j] += max(a[i-1][j-1], max(a[i][j-1], a[i+1][j-1]));
		   	}
		}
	    int result = -1e9;
	    for(int i=1;i<=m;i++)
			result = max(result, a[i][n]);
	
	    cout << result<<endl;
	}
    return 0;
}