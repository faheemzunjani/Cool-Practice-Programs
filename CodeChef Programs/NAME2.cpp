#include <stdio.h>

int main()
{
	int T;
	char M[25002];
	char W[25002];
	int lenM;
	int lenW;
	int i;
	int j;
	
	scanf("%d", &T);
	
	for (int k = 0; k < T; k++) {
		scanf("%s %s", M, W);
		
		lenM = 0;
		lenW = 0;
		
		for (lenM = 0; M[lenM] != '\0'; lenM++);
		for (lenW = 0; W[lenW] != '\0'; lenW++);

		if (lenM >= lenW) {
			for (i = 0, j = 0; i < lenM; i++) {
				if (W[j] == M[i]) {
					j++;
				} 
				if (j == lenW) {
					break;
				}
			}
			if (j == lenW) {
				printf("YES\n");
			} else {
				printf("NO\n");
			}
		} else {
			for (i = 0, j = 0; i < lenW; i++) {
				if (M[j] == W[i]) {
					j++;
				} 
				if (j == lenM) {
					break;
				}
			}
			if (j == lenM) {
				printf("YES\n");
			} else {
				printf("NO\n");
			}
		}
	}

	return 0;
}
