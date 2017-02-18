#include <stdio.h>

int main() 
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) 
	{
		scanf("%d",&a[i]);
	}
	// problem always results to 0
	printf("0\n"); //magic of (%9)
}