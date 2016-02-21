#include <stdio.h>

int main()
{
	int T;
	int N, M, K;
	int temp;
	
	scanf("%d", &T);
	
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &N, &M, &K);
		
		if (N > M) {
			if (N - (M + K) > 0) {
				printf("%d\n", (N - (M + K)));
			} else if ((N - (M + K)) == 0) {
				printf("0\n");
			} else {
				temp = (-1) * (N - (M + K));
				if (temp % 2 == 0) {
					printf("0\n");
				} else {
					printf("1\n");
				}
			}
		} else if (M > N){
			if (M - (N + K) > 0) {
				printf("%d\n", (M - (N + K)));
			} else if ((M - (N + K)) == 0) {
				printf("0\n");
			} else {
				temp = (-1) * (M - (N + K));
				if (temp % 2 == 0) {
					printf("0\n");
				} else {
					printf("1\n");
				}
			}
		} else {
			if (K % 2 == 0) {
				printf("0\n");
			} else {
				printf("1\n");
			}
		}
			
	}

	return 0;
}
