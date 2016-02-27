#include <stdio.h>

int main()
{
	long long int N;
	long long int sum;
	long long int ex_sum;
	long long int temp;

	scanf("%lld", &N);
	sum = 0;
	temp = 0;

	for (int i = 0; i < N; i++) {
		scanf("%lld", &temp);
		sum = sum + temp;
	}
	
	ex_sum = (N * (N + 1)) / 2;

	if (sum == ex_sum) {
		printf("YES");
	} else {
		printf("NO");
	}
	
	return 0;
}
