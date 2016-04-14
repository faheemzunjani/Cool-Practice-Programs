#include <stdio.h>
#define MAXSIZE 1000

void max_heapify(int A[], int * heap_size, int i);
int heap_max(int A[], int * heap_size);
int extract_heap_max(int A[], int * heap_size);
void heap_insert(int A[], int * heap_size, int key);
void print_heap(int A[], int * heap_size);

int main()
{
	int A[MAXSIZE];
	char choice[10];
        char choice2[10];
	int element;
	int heap_size;
	
	heap_size = 0;

        do {
                scanf("%s", choice);

                switch (choice[0]) {
                        case 'i' : scanf("%d", &element);
                                   heap_insert(A, &heap_size, element);
                                break;
                        case 'e' : scanf("%s", choice2);
                                   printf("%d\n", extract_heap_max(A, &heap_size));
                                break;
			case 'm' : printf("%d\n", heap_max(A, &heap_size));
                                break;
			case 'p' : print_heap(A, &heap_size);
				break;
                        case 'q' : break;
                        default  : printf("Incorrect command!\n");
                                break;
                }
        } while (choice[0] != 'q');

	return 0;
}

void print_heap(int A[], int * heap_size)
{
	int i;
	
	for (i = 0; i < *heap_size; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}

void max_heapify(int A[], int * heap_size, int i)
{
	int l;
	int r;
	int largest;
	int temp;

	l = (i * 2) + 1;
	r = (i * 2) + 2;

	if (l < *heap_size && A[l] > A[i]) {
		largest = l;
	} else {
		largest = i;
	}

	if (r < *heap_size && A[r] > A[largest]) {
		largest = r;
	} 

	if (largest != i) {
		temp = A[largest];
		A[largest] = A[i];
		A[i] = temp;

		max_heapify(A, heap_size, largest);
	}
}

int heap_max(int A[], int * heap_size)
{
	return A[0];
}

int extract_heap_max(int A[], int * heap_size)
{
	int temp;

	if (*heap_size < 0) {
		printf("Queue empty!\n");
		return -9999;
	} else if (*heap_size != 0){
		temp = A[0];
		A[0] = A[*heap_size - 1];
		(*heap_size)--;
		max_heapify(A, heap_size, 0);
		return temp;
	} else {
		return -9999;
	}
}

void heap_insert(int A[], int * heap_size, int key)
{
	int i;
	int temp;
	int parent_i;

	A[*heap_size] = key;
	i = *heap_size;

	parent_i = (i + 1 / 2) - 1;

	while (i > 0 && A[parent_i] < A[i]) {
		temp = A[parent_i];
		A[parent_i] = A[i];
		A[i] = temp;

		i = parent_i;
		parent_i = (i + 1 / 2) - 1;
	}

	(*heap_size)++;
}
