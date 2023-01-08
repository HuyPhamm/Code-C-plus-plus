#include <bits/stdc++.h>
using namespace std;


bool snt(int n) 
{
	if(n == 1) 
		return false;
	for(int i = 2; i <= sqrt(n); i ++)
	{
		if(n % i == 0) 
			return false;
	}
	return true;
}

void result(int L, int R) 
{
    for(long i = R; i >= L; i --) 
	{
        if(snt(i))
		{	
            cout << i <<endl;
            break;
        }
    }
}
 

int main() 
{
    int t;
	cin >> t;
	while(t--) 
	{
        int L, R;
        cin >> L >> R;
        result(L, R);
    }
    return 0;
}
