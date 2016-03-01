#include <stdio.h>

int main()
{	
	long int T;
	long long int num1;
	long long int num2;
	long long int num3;
	long int i;

	scanf("%ld", &T);
	
	for (i = 0; i < T; i++) {
		scanf("%lld + %lld = %lld", &num1, &num2, &num3);
		
		if (num1 == 63) {
			printf("%lld", (num3 - num2));
		} else if (num2 == 63) {
			printf("%lld", (num3 - num1));
		} else {
			printf("%lld", (num1 + num2));
		}
	}
	
	return 0;
}

