#include<stdio.h>
int main(){
	long int t=0,n=0,i=0,count;
	long int a[101000],min;
	scanf("%ld",&t);
	while(t--)
	{
		count = 0;
		scanf("%ld",&n);

		for(i=0;i<n;i++)
		{
			scanf("%ld",&a[i]);
		}
		min = a[0];
		for(i=0;i<n;i++)
		{
			if(a[i] < min)
			{
				min = a[i];
			}
		}
		for(i=0;i<n;i++)
		{
			if(a[i]==min)
			{
				count++;
			}
		}
		if(count%2==1)
		{
			printf("Lucky\n");
		}
		else printf("Unlucky\n");
	}
}
