//Nothing In Common

// Idea : Hashing is used to reduce the complexity.

    #include <iostream>
    using namespace std;
    int a[1000001],b[1000001],c[1000001];
    int main()
    {
    	int i,j,k,l,n,m,t,count;
    	cin>>t;
    	while(t--)
    	{
    		count=0;
    		for(i=0;i<1000001;i++)
    			c[i]=0;
    		cin>>n>>m;
    		for(i=0;i<n;i++)
    		{
    			cin>>a[i];
    			c[a[i]]++;
    		}
    		for(i=0;i<m;i++)
    		{
    			cin>>b[i];
    			c[b[i]]++;
    			if(c[b[i]]>1)
    				count++;
     
    		}
    		cout<<count<<endl;
     
     
    	}
    	return 0;
    } 
