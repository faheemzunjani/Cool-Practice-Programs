#include <stdio.h>

int main()
{
	long long int t,n,i;
	long long int arr[100001];
	scanf("%d",&t);
	while(t--)
	{
		int even=0,odd=0;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
			{
			scanf("%lld",&arr[i]);}
			for(i=0;i<n;i++)
			{
				if(arr[i]%2==0)
					even++;
				else
					odd++;
			}
		printf("%lld\n",even*odd);
	}
	return 0;
}