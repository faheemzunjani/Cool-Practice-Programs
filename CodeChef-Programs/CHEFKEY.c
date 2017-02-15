
#include<stdio.h>
 
int main()
{
	int T,n,m,c,i,count;
	scanf("%d",&T);
	while(T--)
	{
		count = 0;
		scanf("%d %d %d",&n,&m,&c);
		for(i = 1;i * i <= c;i++)
		{
			if(c % i == 0)
			{
				if(i <= n && (c / i) <= m)
					count++;
				if(i <= m && (c / i) <= n && i != (c / i))
					count++;	
			}
		}
		printf("%d\n",count);
	}
	return 0;
}   