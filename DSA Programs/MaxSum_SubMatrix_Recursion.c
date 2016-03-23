#include <stdio.h>
#define MAXSIZE 100

void max_sum(int A[MAXSIZE][MAXSIZE], int N, int sub_N, int * result_sum);

int main()
{
	int A[MAXSIZE][MAXSIZE];
	int i;
	int j;	
	int N;
	int *result_sum = NULL;

	scanf("%d", &N);
	
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	
	result_sum = &A[N-1][N-1];	
	
	max_sum(A, N, 0, result_sum);
	
	printf("%d\n", *result_sum);
	
	return 0;
}

void max_sum(int A[MAXSIZE][MAXSIZE], int N, int sub_N, int * result_sum)
{	
	int temp_sum;
	int i;
	int j;

	temp_sum = 0;

	if (sub_N == (N - 1)) {
		if (A[sub_N][sub_N] > *result_sum) {
			*result_sum = A[sub_N][sub_N];
			return ;
		} else {
			return ;
		}
	} else {
		temp_sum = 0;

		for (i = sub_N; i < N; i++) {
			for (j = sub_N; j < N; j++) {
				temp_sum = temp_sum + A[i][j];
			}
		}

		if (temp_sum > *result_sum) {
			*result_sum = temp_sum;
		}

		return max_sum(A, N, (sub_N + 1), result_sum);
	}
}
		
		
