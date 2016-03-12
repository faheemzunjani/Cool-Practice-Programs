#include <iostream>
#include <cstdio>
 
using namespace std;
 
int main()
{
	char A[1005];
	char B[1005];
	int flag;
	int i;
	int T;
	int N;
 
	scanf("%d", &T);
 
	while (T--) {
		scanf("%s %s", A, B);
 
		flag = 0;
 
		int alpha1[26] = {0};
		int alpha2[26] = {0};
 
		for (i = 0; A[i] != '\0'; i++) {
			alpha1[(A[i] - 'a')] += 1;
		}
 
		for (i = 0; B[i] != '\0'; i++) {
			alpha2[(B[i] - 'a')] += 1;
		}
 
		for (i = 0; i < 26; i++) {
			if (alpha1[i] != 0 && alpha2[i] != 0) {
				printf("Yes\n");
				flag = 1;
				break;
			}
		}	
 
		if (flag == 0) {
			printf("No\n");
		}
	}
 
	return 0;
} 