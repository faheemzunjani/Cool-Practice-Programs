#include<stdio.h>
int main()
{
	int t,n,i;
	long int ar[100000],c,j=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	scanf("%d",&n);
	if(n==2)
	{
	scanf("%ld",&c);
	ar[j]=c;
	j++;
	}
	else if(n==1)
	{
	if(j<1)
	{
	printf("No Food\n");
	}
	else
	{
	printf("%ld\n",ar[j-1])

;
j--;
	}
}
	}
return 0;	
}