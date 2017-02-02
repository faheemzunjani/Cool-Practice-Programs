#include<stdio.h>
int main(){
	long int t,n,i,count=0,x=0;
	scanf("%ld",&t);
	for(i=0;i<t;i++)
	{
		count = 0;
		scanf("%ld",&n);
		while(n>0)
		{
			if(n%10 == 4)
			{
				count++;
			}
			n = n/10;
		}
		printf("%ld\n",count);
	}
}
