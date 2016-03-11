#include <stdio.h>

int binary_search(int A[10000], int beg, int end, int value);

int main()
{
	int A[10000];
	int element;
	int N;
	int i;
	int index;

	scanf("%d", &N);
	
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	
	scanf("%d", &element);
	
	index = binary_search(A, 0, (N - 1), element);

	printf("%d\n", index);

	return 0;
}

int binary_search(int A[10000], int beg, int end, int value)
{
	int mid;

	mid = (beg + end) / 2;
	
	if (beg == end && A[mid] != value) {
		return -1;
	} else if (A[mid] == value) {
		return mid;
	} else if (A[mid] > value) {
		return binary_search(A, beg, (mid - 1), value);
	} else {
		return binary_search(A, (mid + 1), end, value);
	}
}
