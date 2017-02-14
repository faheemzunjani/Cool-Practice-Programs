#include <stdio.h>

int main(void) {
long int n,k,t,i;
	scanf("%ld",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%ld%ld",&n,&k);
	    printf("%ld\n",n%k);
	}
	return 0;
}
