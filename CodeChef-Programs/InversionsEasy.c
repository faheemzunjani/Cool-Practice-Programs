#include <stdio.h>

int main()
{
	int N;
	int i;
	int j;
	int k;
	int count;
	long long int A[2000];

	scanf("%d", &N);
	
	count = 0;
	
	for (k = 0; k < N; k++) {
		scanf("%lld", &A[k]);
	}
	
	for (i = 0; i < (N-1); i++) {
		for (j = i + 1; j < N; j++) {
			if (A[i] > A[j]) {
				count++;
			}
		}
	}
	
	printf("%d", count);

	return 0;
}
