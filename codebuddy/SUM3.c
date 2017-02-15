#include <stdio.h>

int main(void)
{
    int n,dig,sum=0;
	scanf("%d",&n);
	while(n!=0)
	{
	    dig=n%10;
	    sum+=dig;
	    n=n/10;
	}
	printf("%d",sum);

	return 0;
}
