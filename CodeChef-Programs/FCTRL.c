#include <stdio.h>

int main()
{
	long long int T;
	long long int N;
	long long int i;
	long long int j;
	long long int z;

	scanf("%lld", &T);

	for (i = 0; i < T; i++) {
		scanf("%lld", &N);

		z = 0;

		for (j = 5; j <= N; j *= 5) {
			z += (N / j);
		}
		printf("%lld\n", z);
	}

	return 0;
}
