#include <stdio.h>

int main()
{
	int x,y,i;
	char a[100000];
	x=0;
	y=0;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='L')
		{
			x = x-1;
		}
		else if(a[i]=='R')
		{
			x = x+1;
		}
		else if(a[i]=='D')
		{
			y = y-1;
		}
		else if(a[i]=='U')
		{
			y = y+1;
		}
	}
	printf("%d %d",x,y);

	return 0;
}
