#include<stdio.h>
int main(){
	long int t,a,b,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%ld %ld %ld",&a,&b,&c);
		if((a>b && a<c) || (a>c && a<b))
		{
			printf("%ld\n",a);
		}
		else if((b>a && b<c) || (b>c && b<a))
		{
			printf("%ld\n",b);
		}
		else if((c>a && c<b) || (c>b || c<a))
		{
			printf("%ld\n",c);
		}
	}
	return 0;
}
