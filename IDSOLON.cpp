#include <bits/stdc++.h>
using namespace std;
string sum(string a, string b) 
{
	while (a.size() < b.size())  a = '0' + a;
	while (a.size() > b.size())  b = '0' + b;
	string temp = "";
	int x = 0;
	string rem = "0";
	for (int i = a.size() - 1; i >= 0; i--)
	{
	    x = (int)a[i] + (int)b[i] + (int)rem[0] - 48 * 3;
	    if (x > 9) 
		{
	        temp += (char)(x % 10 + 48);
	        rem = (char)(x / 10 + 48);
	    } 
		else 
		{
	        temp += (char)(x + 48);
	        rem = "0";
	    }
	}
	    if (rem != "0") temp += rem;
	    reverse(temp.begin(), temp.end());
	return temp;
}
string multiplyTwoNumbers(string num1, string num2) 
{
   if (num1 == "0" || num2 == "0") {
      return "0";
   }
   string product(num1.size() + num2.size(), 0);
   for (int i = num1.size() - 1; i >= 0; i--) {
      for (int j = num2.size() - 1; j >= 0; j--) {
            int n = (num1[i] - '0') * (num2[j] - '0') + product[i + j + 1];
            product[i + j + 1] = n % 10;
            product[i + j] += n / 10;
      }
   }
   for (int i = 0; i < product.size(); i++) {
      product[i] += '0';
   }
   if (product[0] == '0') {
      return product.substr(1);
   }
   return product;
}


int main()
{
	int t;
	ifstream fi("bignumber.in");
  	ofstream fo("bignumber.out");
  	fi >> t;
	while(t--)
	{
		string a,b;
		char c;
		fi>>a>>c>>b;
		if(c=='+')
			fo<<sum(a,b)<<endl;
		if(c=='*')
			fo<<multiplyTwoNumbers(a,b)<<endl;
	}
	fi.close();
    fo.close();
}

