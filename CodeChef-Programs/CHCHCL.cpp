#include <cstdio>

int main()
{
	int T;
	long long int n;
	long long int m;

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%lld %lld", &n, &m);

		if ((n * m) % 2 == 1) {
			printf("No\n");
		} else {
			printf("Yes\n");
		}
	}
			
	return 0;
}
