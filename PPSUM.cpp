#include <stdio.h>

int sum(int D, int N);

int main()
{
	int T;
	int D;
	int N;

	scanf("%d", &T);
	
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &D, &N);

		printf("%d\n", sum(D, N));
	} 
		
	return 0;
}

int sum(int D, int N)
{
	int temp_sum;

	temp_sum = 0;

	if (D == 1) {
		for (int i = 1; i <= N; i++) {
			temp_sum += i;
		}
		return temp_sum;
	} else {
		for (int i = 1; i <= N; i++) {
			temp_sum += i;
		}
		return (sum((D - 1), temp_sum));
	}
}
