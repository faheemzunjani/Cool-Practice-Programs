#include <stdio.h>

void sel_sort(int * ptr_array, int N);
int binary_search(int A[1000], int beg, int end, int value);

int main()
{
	int N;
	int A[1000];
	int i;
	int res_index;
	int element;

	res_index = -1;

	scanf("%d", &N);
	
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	
	scanf("%d", &element);
	
	sel_sort(A, N);
	res_index = binary_search(A, 0, (N - 1), element);
	
	if (res_index == -1) {
		printf("Not Found\n");
	} else {
		printf("Found\n");
	}

	return 0;
}

void sel_sort(int * ptr_array, int N)
{
	int i;
	int j;
	int min;
	int min_i;
	
	min_i = 0;
	min = ptr_array[0];

	for (i = 0; i < N; i++) {
		min = ptr_array[i];
		min_i = i;

		for (j = (i + 1); j < N; j++) {
			if (ptr_array[j] < min) {
				min = ptr_array[j];
				min_i = j;
			}
		}
		
		ptr_array[min_i] = ptr_array[i];
		ptr_array[i] = min;
	}
}

int binary_search(int A[1000], int beg, int end, int value)
{	
	int mid;

	mid = (beg + end) / 2;
	
	if (beg >= end && A[mid] != value) {
		return -1;
	} else if (A[mid] == value) {
		return mid;
	} else if (A[mid] > value) {
		return binary_search(A, beg, (mid - 1), value);
	} else {
		return binary_search(A, (mid + 1), end, value);
	}
}
