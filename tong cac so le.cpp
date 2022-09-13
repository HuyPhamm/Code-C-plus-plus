#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long L,R;
		cin>>L>>R;
		if(L%2==0) 
			L++;
		if(R%2==0) 
			R--;
		long long N=R-L+1,X,Y;
		X=(N/2)+1;
		long long rs=X*((L+R)/2);
		cout<<rs<<endl;
	}
		return 0;
}
	

