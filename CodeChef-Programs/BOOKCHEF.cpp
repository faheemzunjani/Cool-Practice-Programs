// Chef uses socialnetwork

    #include <bits/stdc++.h>
    using namespace std;
    int a[100001];
    int find(int n,int size)
    {
    	int i,flag;
    	for(i=0;i<size;i++)
    		if(n==a[i])
    			return 1;
    	return 0;
     
    	
    }  
    int main() {
    	// your code goes here
    	int i,j,k,l,n,m,d,t,p,f;
    	char s[100001][101];
    	map <int,char*> m1;
    	map <int,char*> m2;
    	map <int,char*> :: reverse_iterator it;
    	cin>>n>>m;
    	for(i=0;i<n;i++)
    		cin>>a[i];
    	sort(a,a+n);
    	for(i=0;i<m;i++)
    	{
    		cin>>f;
    		d=find(f,n);
    		if(d)
    		{
    			cin>>p;
    			cin>>s[i]; 
    			m1[p] = s[i];
    		}
    		else
    		{
    			cin>>p;
    			cin>>s[i];
    			m2[p] = s[i];
    		}
    		
    	}
    	
    	for(it=m1.rbegin();it!=m1.rend();it++)
    		cout<<it->second<<endl;
    	for(it=m2.rbegin();it!=m2.rend();it++)
    		cout<<it->second<<endl;
    	return 0;
    } 
