//Chef and his apartment dues        

#include <bits/stdc++.h>
        using namespace std;
         
        int main() {
        	int i,j,k,l,d,n,t,a[100001],count,flag,c=0;
        	cin>>t;
        	while(t--)
        	{
        		cin>>n;
        		count=0;
        		for(i=0;i<n;i++)
        		{
        			cin>>a[i];
        		}
        		for(i=0;i<n;i++)
        		{
        			if(a[i]==0)
        				{count=count+1100;
        				c++;}
        			if(a[i]!=0)
        			{
        				if(c>0)
        				{count=count+100;}
        			}
        		}
        		cout<<count<<endl;c=0;
        	}
        	return 0;
        }  
