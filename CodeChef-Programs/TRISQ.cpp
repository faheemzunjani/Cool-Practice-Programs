//Fit Suares in Triangles
    

#include<stdio.h>
    long long int a[10000];
    int ans()
    {
    	int i,j,k,l;
    	for(i=0;i<10000;i++)
    		a[i]=i;
    	for(i=1;i<10000;i++)
    		a[i]=a[i]+a[i-1]; 
    }
    int main()
    {
    	long long int i,j,k,l,t,n;
    	ans();
    	scanf("%lld",&t);
    	for(i=1;i<=t;i++)
    	{
    		scanf("%lld",&n);
    		k=(n-2)/2;
    		printf("%lld\n",a[k]);
    	}
    	return 0;
    	
    }

/*
EXPLANATION:

Consider the right angled isocleles tri. with base 100

The lowest row consists of a 98/2=49 squares in it.(Since side=2)
and the next consists of 48 squares.
So the total number of squares will be sunm of the numbers till 49.  

*/
     
