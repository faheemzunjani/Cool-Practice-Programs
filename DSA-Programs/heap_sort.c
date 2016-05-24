#include <stdio.h>

void max_heapify(int A[], int heap_size, int i);
void build_max_heap(int A[], int heap_size);
void heap_sort(int A[], int heap_size);

int main()
{
	int A[1000];
	int N;
	int i;
	
	scanf("%d", &N);
	
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}

	heap_sort(A, N);	
	
	for (i = 0; i < N; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");

	return 0;
}

void max_heapify(int A[], int heap_size, int i)
{
	int l;
	int r;
	int largest;
	int temp;

	l = (i * 2) + 1;
	r = (i * 2) + 2;

	if (l < heap_size && A[l] > A[i]) {
		largest = l;
	} else {
		largest = i;
	}

	if (r < heap_size && A[r] > A[largest]) {
		largest = r;
	}

	if (largest != i) {
		/* Swap */
		temp = A[i];
		A[i] = A[largest];
		A[largest] = temp;		
		/* Restoring Heap property */
		max_heapify(A, heap_size, largest);
	}
}

void build_max_heap(int A[], int heap_size)
{
	int i;

	for (i = heap_size / 2; i >= 0; i--) {
		max_heapify(A, heap_size, i);
	}
}

void heap_sort(int A[], int heap_size)
{
	int i;
	int temp;

	build_max_heap(A, heap_size);
	
	for (i = heap_size - 1; i >= 1; i--) {
		/* Swap */
		temp = A[i];
		A[i] = A[0];
		A[0] = temp;

		heap_size--;
		max_heapify(A, heap_size, 0);
	}
}
