#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long n;
	cin >>n;
    long long s=abs(n);
	int i=2;
	while(n!=0)
	{
		for(int i = s;i>=0;i--)
			if(s % i == 0)
            	cout << i << " ";
        
	}
}
