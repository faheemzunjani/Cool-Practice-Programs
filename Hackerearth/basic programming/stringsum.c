#include <stdio.h>

int main()
{
	int i,sum;
	char a[1000];
	scanf("%s",a);
	sum = 0;
	for(i=0;a[i]!='\0';i++)
	{
		sum = sum + (a[i]-96);
	}
	printf("%d",sum);

	return 0;
}
