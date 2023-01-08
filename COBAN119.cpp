#include<bits/stdc++.h>
using namespace std;

int F[33][2][2][33];
int n, k;

int go(int pos, int greZ, int isLess, int totalZ) {
    if(pos<0) return totalZ == k;
    int & ret = F[pos][greZ][isLess][totalZ];
    if(ret!=-1) return ret;
    int cur = (n >> pos) & 1;
    ret = 0;
    for(int ad=0;ad<2;++ad) if(isLess || (ad <= cur))
        ret += go( pos - 1, greZ || (ad > 0), isLess || (ad < cur), totalZ + (ad == 0 && greZ));
    return ret;
}

int main() 
{
	int t;
	cin>>t;
	while(t--)
    {
        cin>>n>>k;
		memset( F, -1, sizeof(F));
        cout << go( 30, 0, 0, 0) + (k==1) - (k==0) << endl;
    }   
    return 0;
}