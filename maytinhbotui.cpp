#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int a,b;
    char c;
    cin >> a >> c >> b;
    switch (c)
    {	
    	case '+':
    	{
    		cout << fixed << setprecision(2) <<(float)a+b;
    		break;
		}
    	case '-':
    	{		
    		cout << fixed << setprecision(2) <<(float)a-b;
    		break;
		}	
   		case '*':
    	{
			cout << fixed << setprecision(2) <<(float)a*b;
    		break;
    	}
   	 	case '/':
    	{
    		if (b==0)
    		{
    			cout << "Math Error";
    			break;
    		}
    		else
			cout << fixed << setprecision(2) <<(float)a/b;
    		break;

		}
	}

}
