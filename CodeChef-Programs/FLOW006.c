#include<stdio.h>
int main(){
	int t,n,i,sum=0;;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		sum = 0;
		scanf("%d",&n);
		while(n>0)
		{
			sum = sum + n%10;
			n=n/10;
		}
		printf("%d\n",sum);
	}
	return 0;
}
