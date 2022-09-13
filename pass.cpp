#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Please fill in your password:" << endl;
    string password;
    cin >> password;
    int a=0;
    if (password.length() >= 6)
        a = 1;
    int b, c;
    b = c = 0;
    for (int i = 0; i < password.length(); i++)
    {
        if (password[i] <= password[i+1])
            b = 1;
        if(password[i] > password[i+1])
        {
        	cout << "Nhap lai" ;
        	break;
        }
        else if (password.find('@') ||  password.find('&') || password.find('%'))
        {
            c = 1;
        }
        else
            continue;
    }
    if(a==1 && b==1 && c==1)
    	cout <<"accepted";
    
}

