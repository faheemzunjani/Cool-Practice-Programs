#include<stdio.h>
#include<math.h>
int main(){
	int t,n,result;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		result = sqrt(n);
		printf("%d\n",result);
	}
	return 0;
}
