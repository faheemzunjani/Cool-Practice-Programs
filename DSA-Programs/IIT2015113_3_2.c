#include <stdio.h>
#define MAXSIZE 1000

struct node {
	int data;
	int priority;
};

void priority_enqueue(struct node p_queue[], int * rear, int element);
int priority_dequeue(struct node p_queue[], int * rear);
int size_p_queue(struct node p_queue[], int * rear);
void print_p_queue(struct node p_queue[], int * rear);

int main()
{
	struct node p_queue[MAXSIZE];
	int rear;
	int element;
	int N;
	int i;

	rear = -1;

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d", &element);
		priority_enqueue(p_queue, &rear, element);
	}

	print_p_queue(p_queue, &rear);

	return 0;
}

void priority_enqueue(struct node p_queue[], int * rear, int element)
{
	if (*rear == -1) {
		(*rear)++;
		p_queue[*rear].data = element;
		p_queue[*rear].priority = element % 17;
	} else if (*rear == MAXSIZE) {
		printf("Memory Overflow!\n");
	} else {
		(*rear)++;
		p_queue[*rear].data = element;
		p_queue[*rear].priority = element % 17;
	}	
}

int priority_dequeue(struct node p_queue[], int * rear)
{
	int temp_data;
	int temp_priority;
	int min_i;
	int i;

	if (size_p_queue(p_queue, rear) == 1) {
		*rear = -1;
		return p_queue[0].data;
	} else {
		temp_priority = p_queue[0].priority;

		for (i = 0; i <= *rear; i++) {
			if (p_queue[i]. priority <= temp_priority) {
				temp_priority = p_queue[i].priority;
				min_i = i;
			}
		}

		temp_data = p_queue[min_i].data;
		
		for (i = min_i; i < *rear; i++) {
			p_queue[i] = p_queue[i + 1];
		}
		return temp_data;
	}
}

int size_p_queue(struct node p_queue[], int * rear)
{
	return *rear + 1;
}

void print_p_queue(struct node p_queue[], int * rear)
{
	int i;
	int temp_data;

	for (i = 0; i < size_p_queue(p_queue, rear); i++) {
		temp_data = priority_dequeue(p_queue, rear);
		printf("%d\n", temp_data);
	}
}
