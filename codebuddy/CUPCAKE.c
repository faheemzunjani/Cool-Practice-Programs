#include <stdio.h>

int main(void)
{
    long long int i,t,max,n;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%lld",&n);
	    max=(n/2)+1;
	    printf("%lld\n",max);
	}

	return 0;
}
