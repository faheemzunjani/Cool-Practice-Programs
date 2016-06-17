#include <stdio.h>

int main()
{
	int A[1000005] = {0};
	long long int T;
	long long int N;
	long long int max;
	long long int i;
	long long int j;
	long long int k;

	scanf("%lld", &T);
	
	max = 0;

	for (i = 0; i < T; i++) {
		scanf("%lld", &N);
		A[N]++;
		
		if (N > max) {
			max = N;
		}
	}

	for (j = 0; j <= max; j++) {
		for (k = 0; k < A[j]; k++) {
			printf("%lld\n", j);
		}
	}
	
	return 0;
}

