#include <stdio.h>

void ins_sort_part(int A[], int N);

int main()
{
	int A[105];
	int N;
	int i;

	scanf("%d", &N);
	
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}

	ins_sort_part(A, N);

	for (i = 0; i < N; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");

	return 0;
}

void ins_sort_part(int A[105], int N)
{
	int i;
	int j;
	int B[105];
	int n_odd;
	int n_even;
	int temp_val;

	// Partitioning the array into two parts	
	for (i = 0, n_odd = 0; i < N; i++) {
		if (A[i] % 2 != 0) {
			B[n_odd] = A[i];
			n_odd++;
		}
	}

	for (i = 0, n_even = 0; i < N; i++) {
		if (A[i] % 2 == 0) {
			B[n_odd + n_even] = A[i];
			n_even++;
		}
	}

	for (i = 0; i < N; i++) {
		A[i] = B[i];
	}
	
	//Sorting the two halves using Insertion Sort
	
	for (i = 1; i < n_odd; i++) {
		temp_val = A[i];

		for (j = (i - 1); (j > -1) && (A[j] > temp_val); j--) {
			A[j + 1] = A[j];
		} 
		A[j + 1] = temp_val;
	}

	for (i = (n_odd + 1); i < N; i++) {
		temp_val = A[i];

		for (j = (i - 1); (j > (n_odd - 1)) && (A[j] > temp_val); j--) {
			A[j + 1] = A[j];
		}
		A[j + 1] = temp_val;
	} 	
	
}
