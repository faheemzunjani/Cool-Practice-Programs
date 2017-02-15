
#include <stdio.h>
 
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int j,N,k,L,i,s=0;
		scanf("%d %d",&N,&k);
		for(i=0;i<N;i++)
		{
			scanf("%d",&j);
			s=s+j;
		}
		for(i=0;i<k-1;i++)
		{
			L=s+1;
			s=s+L;
		}
		L=s+1;
		if((L%10)%2==0)
		printf("even\n");
		else
		printf("odd\n");
	
	}// your code goes here
	return 0;
}
 