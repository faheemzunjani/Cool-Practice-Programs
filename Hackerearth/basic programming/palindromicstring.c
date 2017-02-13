#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,x,count=0;
	char orig[100];
	char rev[100];
	scanf("%s",orig);
	x = strlen(orig);
	for(i=x-1,j=0;i>=0,j<=x-1;i--,j++)
	{
		rev[j]=orig[i];
	}
	for(i=0;i<=x-1;i++){
		if(orig[i] == rev[i])
			count++;
	}
	if (count == x)
	{printf("YES");}
	else
	{printf("NO");}
	return 0;
}
