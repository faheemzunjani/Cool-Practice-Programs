#include <stdio.h>

int main()
{
	int n,x[105],i,max,k,count;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	max=0;

	for(i=0;i<n;i++){
		count=0;
		for(k=0;k<n;k++){
			if(x[i]==x[k]){
				count++;

			}
			if(count>max)
			{
				max=count;
			}
		}
	}
	printf("%d\n",(n-max));

	return 0;
}
