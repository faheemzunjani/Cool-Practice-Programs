#include <stdio.h>

int main()
{
	int T;
	int N;
	
	scanf("%d", &T);
	
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		
		if (360 % N == 0) {
			printf("y ");
		} else {
			printf("n ");
		}

			
	
	
	
	return 0;
}
