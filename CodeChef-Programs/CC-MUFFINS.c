#include<stdio.h>
 
int main()
{
        int t,n;
 
        scanf("%d",&t);
        for(;t>0;t--)
        {
             scanf("%d",&n);
             if(n%2)
             	printf("%d\n",(n+1)/2);
             else
             	printf("%d\n",n/2+1);
        }
        return 0;
}