#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	int D=b*b-4*a*c;
	if (a==0)
	{
		if (b==0 && c==0) 
	{
		cout << "INF";
	} 
    	else if (b==0 && c!=0)
        {
			cout << "NO";
		} 
    	else 
        {
			cout << fixed << setprecision(2) << (float)-c/b;
		}
    if (D < 0)
        {
            cout << "NO";
        }
    else if(D==0)
        {
            cout << fixed << setprecision(2) << (float)-b / (2 * a);
        }
    }
	else if(D>0)
		cout << fixed << setprecision(2) <<min((double)(-b+sqrt(D))/(2*a),(double)(-b-sqrt(D))/(2*a)) << " " << max((double)(-b+sqrt(D))/(2*a),(double)(-b-sqrt(D))/(2*a));
}

