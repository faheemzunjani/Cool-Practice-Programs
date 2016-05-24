#include <stdio.h>
#include <algorithm>

int main()
{
	long long int T;
	long long int N;
	long long int A[10000];
	long long int B[10000];
	char name[10000][10];
	long long int min_unique;

	scanf("%lld", &T);

	for (int i = 0; i < T; i++) {
		scanf("%lld", &N);
		for (int j = 0; j < N; j++) {
			scanf("%s %lld", name[j], &A[j]);
			B[j] = A[j];
		}
		
		std::sort(A, A+N);
		
		min_unique = -99999;

		if (A[0] != A[1]) {
			min_unique = A[0];
		} else {		
			for (int k = 1; k < N; k++) {
				if ((A[k-1] != A[k]) && (A[k+1] != A[k])) {
					min_unique = A[k];
					break;
				}
			}
		}	
		
		if (min_unique == -99999) {
			printf("Nobody wins.\n");
		} else {
			for (int j = 0; j < N; j++) {
				if (B[j] == min_unique) {
					printf("%s\n", name[j]);
					break;
				}
			}
		}

	}
	
	return 0;
}
	
