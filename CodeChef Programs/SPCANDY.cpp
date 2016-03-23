#include <stdio.h>

int main()
{	
	int T;
	long long int N;
	long long int K;
	
	scanf("%d", &T);
	
	for (int i = 0; i < T; i++) {
		scanf("%lld %lld", &N, &K);
		if (K != 0) {
			printf("%lld %lld\n", ((N-(N%K))/K), (N%K));
		} else {
			printf("0 %lld\n", N);
		}
	}
	
	return 0;
}
