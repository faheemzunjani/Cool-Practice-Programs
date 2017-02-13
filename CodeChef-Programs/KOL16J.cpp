// Quentin Tarantino

    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int i,j,k,l,t,a[100],n,m,b[100],c[501],flag;
    	cin>>t;
    	while(t--)
    	{
    		cin>>n;
    		for(i=0;i<n;i++)
    			c[i]=0;
    		
    		for(i=0;i<n;i++)
    		{
    			cin>>a[i];
    			b[i]=a[i];
    			c[a[i]]++;
    			
    		}
    		
    		sort(a,a+n);
    		flag=0;
    		for(i=0;i<n;i++)
    		{
    			if(a[i]!=i+1)
    				flag=1;
    		}
    		if(flag==1)
    			cout<<"no"<<endl;
    		else
    		{
    			flag=1;
    			for(i=0;i<n;i++)
    			{
    			
    				if(a[i]!=b[i])
    					flag=0;
    					
    					
    			}
    			if(flag==0)
    				cout<<"yes"<<endl;
    			else
    				cout<<"no"<<endl;
    		}
    		
    		
    	}
    	return 0;
    } 
