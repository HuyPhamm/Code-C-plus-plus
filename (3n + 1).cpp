#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int tu=1;
    float mau1=1;
    float mau2=1;
    int count=n-k;
    if(1<=k<=n<=12)
	{
		while(k!=0)
		{
			(float)(mau1*=k);
			k--;
		}
   		for(int j=1;j<=count;j++)
   		(float)(mau2*=j);
		for(int m=1;m<=n;m++)
		(float)(tu*=m);

	}
	float mau=mau1*mau2;
	float kq=(tu)/(mau);
	cout<< (float)kq;
}




