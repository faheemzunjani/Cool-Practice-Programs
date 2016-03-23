#include <stdio.h>

void quick_sort(int A[], int lb, int ub);
int partition(int A[], int lb, int ub);
void swap(int *p, int *q);

int main()
{
        int N;
        int A[1000];
        int i;

        scanf("%d", &N);

        for (i = 0; i < N; i++) {
                scanf("%d", &A[i]);
        }

        quick_sort(A, 0, (N-1));

        for (i = 0; i < N; i++) {
                printf("%d ", A[i]);
        }
        printf("\n");

        return 0;
}

void quick_sort(int A[], int p, int r)
{
	int q;

        if (p < r) {
                q = partition(A, p, r);
                quick_sort(A, p, (q - 1));
                quick_sort(A, (q + 1), r);
        }
}

int partition(int A[], int p, int r) 
{
	int x;
	int i;
	int j;

	x = A[r];
	i = p - 1;

	for (j = p; j < r; j++) {
		if (A[j] <= x) {
			i = i + 1;
			swap(&A[i], &A[j]);
		}
	}

	swap(&A[i + 1], &A[r]);

	return (i + 1);
}

void swap(int *p, int *q)
{
        int temp;

        temp = *p;
        *p = *q;
        *q = temp;
}

