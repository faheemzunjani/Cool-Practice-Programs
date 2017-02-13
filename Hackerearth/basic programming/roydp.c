#include <stdio.h>

int main()
{
	int L,N,i=0;
	int W,H;
	scanf("%d",&L);
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d %d",&W,&H);
		if(W<L || H<L)
			printf("UPLOAD ANOTHER\n");
		else if(W==H)
			printf("ACCEPTED\n");
		else if(W==L && H==L)
			printf("ACCEPTED\n");
		else if(W>L || H>L)
			printf("CROP IT\n");

	}
	return 0;
}
