#include <iostream>
using namespace std;

int main()
{
    int n,i,t,j,k,count;
    scanf("%d",&t);
    for (i=0;i<t;i++)
    	{
    		scanf("%d",&n);
    		count=0;
    		for (j=1;j<=n;j++)
    			{
    			for (k=j;k<=n;k++)
    				{
    					if (((j^k)<=n)&&(j!=k))
    						count++;
    				}
    			}
    		printf("%d\n",count);
    	}
    return 0;
}
