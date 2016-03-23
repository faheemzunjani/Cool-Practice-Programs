#include <stdio.h>
#include <limits.h>

int main()
{
	int A[100];
	int B[100];
	int N;
	int i;
	int j;
	int k;
	int min;
	int min_i;

	scanf("%d", &N);
	
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	
	for (i = 1, j = 0; i < (N - 1); i++) {
		if (A[i - 1] < A[i] && A[i + 1] < A[i]) {
			B[j] = A[i];
			j++;
		}
	}
	
	for (k = 0; k < j; k++) {
		min = B[0];
		for (i = 0; i < j; i++) {
			if (B[i] < min && B[i] != INT_MAX) {
				min = B[i];
				min_i = i;
			}
		}
		printf("%d ", min);
		B[min_i] = INT_MAX;
	}
	
	return 0;
}
