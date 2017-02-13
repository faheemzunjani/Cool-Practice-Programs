#include <stdio.h>

int main()
{
	int i,t,maxb,maxa,l,m,j,k;
	long int n,a[100000],b[100000];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%ld",&n);
		{
			for(j=0;j<n;j++)
			{
				scanf("%ld",&a[j]);
			}
		}
		{
			for(k=0;k<n;k++)
			{
				scanf("%ld",&b[k]);
			}
		}
		maxa=a[0];
		for(l=1;l<n;l++)
		{
			if(a[l]>maxa)
				maxa=a[l];
		}
		maxb=b[0];
		for(m=1;m<n;m++)
		{
			if(b[m]>maxb)
				maxb=b[m];
		}
		if(maxa==maxb)
		{
			printf("Tie\n");
		}
		else if(maxa>maxb)
		{
			printf("Bob\n");
		}
		else if(maxb>maxa)
		{
			printf("Alice\n");
		}
	}
	return 0;
}
