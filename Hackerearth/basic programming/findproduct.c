#include <stdio.h>

int main()
{
	long int ans;
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	ans=1;
	for(i=0;i<n;i++)
	{
		ans = (ans*a[i]) % (1000000007);
	}
	printf("%ld",ans);
	return 0;
}
