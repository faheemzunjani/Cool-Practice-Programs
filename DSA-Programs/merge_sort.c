#include <stdio.h>

void merge_sort(int A[], int p, int r);
void merge(int A[], int p, int q, int r);

int main()
{
	int N;
	int A[1000];
	int i;

	scanf("%d", &N);	
	
	for (i = 0; i < N; i ++) {
		scanf("%d", &A[i]);
	}

	merge_sort(A, 0, (N - 1));

	for (i = 0; i < N; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");

	return 0;
}

void merge_sort(int A[], int p, int r)
{
	int q;

	if (p < r) {
		q = ((p + r) / 2);
		merge_sort(A, p, q);
		merge_sort(A, (q + 1), r);
		merge(A, p, q, r);
	}
}

void merge(int A[], int p, int q, int r)
{ 
	int L[1000];
	int R[1000];
	int nL; 
	int nR;
	int i;
	int j;
	int k;

	nL = q - p + 1;
	nR = r - q;
	i = 0;
	j = 0;

	for (i = p, j = 0; j < nL; i++, j++) {
		L[j] = A[i];
	}
	
	for (i = (q + 1), j = 0; j < nR; i++, j++) {
		R[j] = A[i];
	}

	for (i = 0, j = 0, k = p; (k < r) && (i < nL) && (j < nR); k++) {
		if (L[i] <= R[j]) {
			A[k] = L[i];
			i++;
		} else {
			A[k] = R[j];
			j++;
		}
	} 

	if (i < nL) {
		for (; i < nL; i++, k++) {
			A[k] = L[i];
		}
	} else {
		for (; j < nR; j++, k++) {
			A[k] = R[j];
		}
	}
}
