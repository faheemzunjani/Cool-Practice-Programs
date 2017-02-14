// Train Partner
       

 #include <bits/stdc++.h>
        using namespace std;
         
        int main() {
        	// your code goes here
        	int i,j,k,l,t,n;
        	cin>>t;
        	while(t--)
        	{
        		cin>>n;
        		k=n%8;
        		if(k==1)
        			printf("%dLB\n",n+3);
        		else if(k==2)
        			printf("%dMB\n",n+3);
        		else if(k==3)
        			printf("%dUB\n",n+3);
        		else if(k==4)
        			printf("%dLB\n",n-3);
        		else if(k==5)
        			printf("%dMB\n",n-3);
        		else if(k==6)
        			printf("%dUB\n",n-3);
        		else if(k==7)
        			printf("%dSU\n",n+1);
        		else
        			printf("%dSL\n",n-1);
        	}
        	return 0;
        }  
