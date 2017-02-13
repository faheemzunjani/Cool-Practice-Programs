#include <stdio.h>

int main()
{
	int a[10000],i,n,min,p,j,t,f=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		min=a[i];
		p=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				p=j;
			}
		}
		t=a[i];
		a[i]=a[p];
		a[p]=t;
	}
	for(i=0;i<n;i++)
	{
		if(a[i+1]-a[i]>1)
			f=1;

	}
	if(f==1)
		printf("NO");
	else 
		printf("YES");
	return 0;
}
