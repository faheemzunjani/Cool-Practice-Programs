#include<stdio.h>
int main()
{
int n,c=1,i;
scanf("%d",&n);
int ar[n];
for(i=0;i<n;i++)
{
	scanf("%d",&ar[i]);
}
//1 2 3 4
for(i=1;i<n;i++)
{
	if(ar[i-1]>ar[i])
	{
      c++;
	}
}
printf("%d",c);
return 0;
}

