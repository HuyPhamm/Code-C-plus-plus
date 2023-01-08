#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long l, r;
		cin >> l >> r;
		long long dem ;
		long long a = sqrt(l);
		long long b;
		if(a * a == l){
			b = a;
		} else {
			b = a + 1;
		}
		long long c = sqrt(r);
		dem = c - b + 1;
		cout << dem << endl;
	}
	return 0;
}
