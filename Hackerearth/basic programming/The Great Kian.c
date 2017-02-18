#include <stdio.h>

int main()
{
    long long int n,i;	
 	scanf("%lld\n",&n);
 	long long int arr[100000];
 	for (i=0;i<n;i++)
 		{
 			scanf("%lld",&arr[i]);
 		}
 	long long int a=0,b=0,c=0;
 	for (i=0;i<n;i+=3)
 	{
 		a+=arr[i];
 	}
 	for (i=1;i<n;i+=3)
 	{
 		b+=arr[i];
 	}
 	for (i=2;i<n;i+=3)
 	{
 		c+=arr[i];
 	}
 	printf("%lld %lld %lld",a,b,c);
    return 0;
}
