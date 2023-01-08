#include<bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    { 
        string time;
        getline(cin,time);
        if(time[8]=='?'&&(time[9]=='0'||time[9]=='1'||time[9]=='2'||time[9]=='3'))
            time[8]='2';
        if(time[8]=='?'&&(time[9]=='4'||time[9]=='5'||time[9]=='6'||time[9]=='7'||time[9]=='8'||time[9]=='9'))
            time[8]='1';
        if(time[8]=='2'&&time[9]=='?')
            time[9]='3';
        if((time[8]=='1' || time[8]=='0') && time[9]=='?')
            time[9]='9';
        if(time[8]=='?' && time[9]=='?')
        {
            time[8]='2';
            time[9]='3';
        }
        if(time[11]=='?'&&(time[12]=='0'||time[12]=='1'||time[12]=='2'||time[12]=='3'||time[12]=='4'||time[12]=='5'||time[12]=='6'||time[12]=='7'||time[12]=='8'||time[12]=='9'))
            time[11]='5';
        if((time[11]=='0'||time[11]=='1'||time[11]=='2'||time[11]=='3'||time[11]=='4'||time[11]=='5')&&time[12]=='?')
            time[12]='9';
        if(time[11]=='?' && time[12]=='?')
        {
            time[11]='5';
            time[12]='9';
        }
        cout <<time.substr(7,13)<<endl;
    }
}