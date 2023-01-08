#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=0;
	int check=INT_MAX;
	int kq=0;
	int a[1000];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		count=0;
		if(a[i]==check)
			continue;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				kq++;
				check=a[i];
			}
			if(count > 1)
			{
				kq-=2;
				count=0;
				break;
			}		
		}
	}
	cout<<kq<<endl;
}














/*
	for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                int tg = a[i];
                a[i] = a[j];
                a[j] = tg;
        	}
    	}
	}
*/