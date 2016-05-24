#include <stdio.h>

int main()
{
	int A[1000];
	int N;
	int key;
	int i;
	int j;
	int k;

	scanf("%d", &N);
	
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	
	for (i = 1; i < N; i++) {
		key = A[i];
		for (int j = i - 1; (j >= 0) && (A[j] > key); j--) {
			A[j+1] = A[j];
			A[j] = key;
		}	
	}
		
	for (k = 0; k < N; k++) {
		printf("%d ", A[k]);
	}
	printf("\n");
	
	return 0;
}
