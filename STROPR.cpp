#include <stdio.h>

int main()
{
	int T;
	long int N;
	long long int A[100005];
	long long int M;
	long int i;
	long int j;
	long long int k;
	long int l;
	long int x;

	A[0] = 0;

	scanf("%d", &T);
	
	for (i = 0; i < T; i++) {
		scanf("%ld %ld %lld", &N, &x, &M);
		for (j = 1; j <= N; j++) {
			scanf("%lld", &A[j]);
			A[j] = ((A[j] % 1000000007) + (A[j - 1] % 1000000007)) % 1000000007;
		}
		if (x == 1) { 
			printf("%lld\n", A[1]);
		} else {
			for (k = 1; k < M; k++) {
				for (l = 2; l <= x; l++) {
					A[l] = ((A[l] % 1000000007) + (A[l - 1] % 1000000007)) % 1000000007;
				}
			}
			printf("%lld\n", A[x]);
		}
	}

	return 0;
}
