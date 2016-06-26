#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int T;
	vector <int> fact(200);
	int N;
	int m;
	int temp;
	int x;
	int i;
	int j;
	int k;

	scanf("%d", &T);

	for (i = 0; i < T; i++) {
		scanf("%d", &N);
		fact[0] = 1;
		m = 1;

		for (j = 1; j <= N; j++) {
			temp = 0;

			for (k = 0; k < m; k++) {
				x = fact[k] * j + temp;
				fact[k] = x % 10;
				temp = x / 10;
			}
			
			while (temp > 0) {
				fact[m] = temp % 10;
				temp /= 10;
				m++;
			}
		}
		
		for (k = m - 1; k >= 0; k--) {
			printf("%d", fact[k]);
		}
		printf("\n");
	}

	return 0;	
}
