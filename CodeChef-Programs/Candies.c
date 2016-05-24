#include <stdio.h>

int main()
{	
	int T;
	int N;
	long long int A[10000];
	long long int count;
	long long int sum;
	long long int eq_num;
	int i;
	int j;
	int k;
	
	sum = 0;
	count = 0;
	eq_num = 0;
	
	scanf("%d", &T);
	
	for (i = 0; i < T; i++) {
		scanf("%d", &N);
		
		for (j = 0; j < N; j++) {
			scanf("%lld", &A[j]);
			sum += A[j];
		}
		
		if (sum % N != 0) {
			printf("-1\n");
		} else {
			eq_num = sum / N;

			for (k = 0; k < N; k++) {
				if (A[k] < eq_num) {
					count += (eq_num - A[k]);
				}
			}
			
			printf("%lld\n", count);
		}
		sum = 0;
		count = 0;
		eq_num = 0;
	}

	return 0;
}
