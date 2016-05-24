#include <stdio.h>

long int triplet_multiply(int A[10000], int N);

int main()
{
	int A[10000];
	int N;
	long int result;
	int i;

	result = 1;

	scanf("%d", &N);
	
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	
	if (N % 3 == 0) {
		result = triplet_multiply(A, N);
	} else if ((N + 1) % 3 == 0) {
		A[N] = 1;
		result = triplet_multiply(A, (N + 1));
	} else if ((N + 2) % 3 == 0) {
		A[N] = 1;
		A[N + 1] = 1;
		result = triplet_multiply(A, (N + 2));
	}
		
	printf("%ld\n", result);

	return 0;
}

long int triplet_multiply(int A[10000], int N)
{
	if (N == 3) {
		return (A[0] * A[1] * A[2]);
	} else {
		return ((A[N-1] * A[N - 2] * A[N - 3]) * triplet_multiply(A, (N - 3)));
	}
}
