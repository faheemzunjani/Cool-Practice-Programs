#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int T;
	int N;
	int count;
	int i;
	int j;
	vector <long long int> W;
	long long int tempW;
	char str1[1005];
	char str2[1005];
	long long int maxW;

	scanf("%d", &T);
	
	for (i = 0; i < T; i++) {
		scanf("%d", &N);
		scanf("%s", str1);
		scanf("%s", str2);

		for (j = 0; j <= N; j++) {
			scanf("%lld", &tempW);
			W.push_back(tempW);
		}
		count = 0;
		maxW = W[0];

		for (j = 0; j < N; j++) {	
			if (str1[j] == str2[j]) {
				count++;
				if (W[count] > maxW) {
					maxW = W[count];
				}
			}
		}

		if (count == N) {
			maxW = W[N];
		}
		printf("%lld\n", maxW);
		W.resize(0);
	}

	return 0;
}
