#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node * next;
	struct node * prev;
};

void list_insert(struct node ** front, struct node ** rear, int element);
void delete_minimum(struct node ** front, struct node ** rear);

int main()
{
	struct node * front = NULL;
	struct node * rear = NULL;
	struct node * temp_ptr = NULL;
	int N;
	int element;
	int i;

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d", &element);
		list_insert(&front, &rear, element);
	}

	delete_minimum(&front, &rear);

	for (temp_ptr = front; temp_ptr != NULL; temp_ptr = temp_ptr->next) {
		printf("%d ", temp_ptr->data);
	}
	printf("\n");

	return 0;
}

void list_insert(struct node ** front, struct node ** rear, int element)
{
	struct node * temp;
	
	temp = (struct node *) malloc(sizeof (struct node));

	if (temp == NULL) {
		printf("Memory Overflow!\n");
	} else {
		temp->data = element;
		temp->next = NULL;
		temp->prev = NULL;

		if (*front == NULL) {
			*front = temp;
			*rear = temp;
		} else {
			(*rear)->next = temp;
			temp->prev = *rear;
			*rear = temp;
		}
	}
}

void delete_minimum(struct node ** front, struct node ** rear)
{
	struct node * temp = NULL;
	struct node * min_ptr = NULL;
	struct node * temp_ptr = NULL;
	int min;

	min = (*front)->data;
	min_ptr = (*front);
			
	for (temp_ptr = *front; temp_ptr != NULL; temp_ptr = temp_ptr->next) {
		if (temp_ptr->data < min) {
			min = temp_ptr->data;
			min_ptr = temp_ptr;
		}
	}

	(min_ptr->prev)->next = (min_ptr->next);
	(min_ptr->next)->prev = min_ptr->prev;

	free(temp_ptr);
}
