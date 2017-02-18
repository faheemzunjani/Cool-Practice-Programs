#include<stdio.h>
 
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[n],i,c[1010];
		for(i=0;i<1010;i++)
		{
			c[i]=0;
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			c[a[i]]++;
		}
		int max=0,sec;
		for(i=0;i<1010;i++)
		{
			if(c[i]>=4)
			{
				sec = i;
				max = i;
			}
			else if(c[i]>=2)
			{
				sec = max;
				max = i;
			}
		}
		if((sec*max)>0)
		{
		    printf("%d\n",sec*max);
		}
		else
		{
		    printf("-1\n");
		}
	}
	return 0;
}   

