#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string child_and_parrent;
		getline(cin,child_and_parrent);
		int do_dai_xau=child_and_parrent.length();
		string length_child=child_and_parrent.substr(9,child_and_parrent.length());
		int count=0;
		for(int i=0;i<=length_child.length();i++)
		{
			count++;
			if(char(length_child[i])==34)
				break;	
		}
		length_child=child_and_parrent.substr(9,count-1);
		string length_parent=child_and_parrent.substr(22+length_child.length(),1000);//do dai xau parrent trong ngoac ("")
		int xau=length_child.length();
		int check=length_parent.length()-1;
		int dung=0;
		if(xau==check&& xau==0 && check==0)
		{
			cout<<0<<endl;
			continue;
		}
		for(int i=0;i<=length_parent.length()-1;i++)
		{
			if(length_child==length_parent.substr(i,xau))
			{
				cout<<i<<endl;
				dung=1;
				break;
			}
		}
		if(dung==0)
			cout<<-1<<endl;	
	}
}