#include <stdio.h>

int main()
{
	long int A[100005];
	long int N;
	long int flag[100005] = {0};
	long int i;

	scanf("%ld", &N);
	
	for (i = 0; i < N; i++)	{
		scanf("%ld", &A[i]);
		
		flag[A[i]] = 1;
	}
	
	if (N == 1) {
		printf("1 ");
	} else {
		for (i = 1; i <= N; i++) {
			if (flag[i] == 0) {
				printf("%ld ", i);
			}
		}
	}

	return 0;
}
