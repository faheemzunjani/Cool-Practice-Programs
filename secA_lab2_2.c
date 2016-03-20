#include <stdio.h>
#include <stdlib.h>

struct node {
	int info;
	struct node * next;
	struct node * prev;
};

void insert(struct node ** head, int value);

int main()
{
	struct node * head = NULL;
	struct node * temp = NULL;
	int N;
	int info_int;
	int i;
	int count;

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d", &info_int);
		insert(&head, info_int);
	}	
	
	scanf("%d", &count);
	
	temp = head;

	for (i = 0; i < count; ) {
		if (temp->prev == NULL) {
			for (; (temp->next != NULL) && (i < count); temp = temp->next) {
				printf("%d ", temp->info);
				i++;
			}
			if (i == N) {
				printf("%d ", temp->info);
				i++;
			}
		} else if (temp->next == NULL) {
			for (; temp->prev != NULL && (i < count); temp = temp->prev) {
				printf("%d ", temp->info);
				i++;
			}
			if (i == 0) { 
				printf("%d ", temp->info);
				i++;
			}
		}
	}

	return 0;
}

void insert(struct node ** head, int value) 
{
	struct node * temp = NULL;
	struct node * temp_ptr = NULL;
	
	temp = (struct node *) malloc(sizeof(struct node));
	temp_ptr = *head;

	if (*head == NULL) {
		temp->info = value;
		temp->next = NULL;
		temp->prev = NULL;
		*head = temp;
	} else {
		for (temp_ptr = *head; temp_ptr->next != NULL; temp_ptr = temp_ptr->next);
		temp->info = value;
		temp->next = NULL;
		temp->prev = temp_ptr;
		(temp_ptr)->next = temp;
	}
}
