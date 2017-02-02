#include<stdio.h>
int main(){
	int t,a[10100],b[10100],i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		printf("%d\n",a[i]+b[i]);
	}
	return 0;
}
