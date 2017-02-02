#include<stdio.h>
int main(){
	int t,i,a,b;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&a,&b);
		if(b>a)
		{
			printf("%d ",b);
		}
		else
			printf("%d ",a);
		printf("%d\n",a+b);
	}
	return 0;
}
