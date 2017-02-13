// Tasks for Alexy

 

    #include <stdio.h>
     
     
    int main(void) {
    	long long int i,j,k,l,n,d,a[100001],t,g,temp,temp1,temp2;
    	scanf("%lld",&t);
    	while(t--)
    	{
    		g=1000000000000000001;
    		scanf("%lld",&n);
    		for(i=0;i<n;i++)
    			scanf("%lld",&a[i]);
    		for(i=0;i<n;i++)
    		{
    			for(j=i+1;j<n;j++)
    			{
    				temp1=a[i];
    				temp2=a[j];
    				k=temp1*temp2;
    				while(temp2)
    				{
    					temp=temp2;
    					temp2=temp1%temp2;
    					temp1=temp;
    					
    				}
    				d=k/temp1;
    				if(g>d)
    					g=d;
    			}
    		}
    		printf("%lld\n",g);
    	}
    	
    	return 0;
    }  
