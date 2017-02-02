#include<stdio.h>
int main(){
	int t,n,i,d;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		d = 0;
		scanf("%d",&n);
		d = n%10;
		while(n/10)
		{
			n = n/10;
		}
		d = d + n;
		printf("%d\n",d);
	}
	return 0;
}

