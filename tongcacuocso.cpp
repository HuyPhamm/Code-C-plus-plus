#include <iostream> 
#include <math.h>

using namespace std; 

int main() {
    int t; 
    cin >> t; 
    for (int i=0; i<t; ++i){
        int n, s=0;
        cin >> n;
        for (int i=1; i<=sqrt(n); i++)
		{
            if (n%i==0)
			{
                int j=n/i;
                if (i==j)
				{
                    s+=i;
                } 
				else 
				{
                    s +=i+j;
                }
            }
        }
        cout << s-n << endl;
    }
    return 0;
}
