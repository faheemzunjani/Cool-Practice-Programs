#include <stdio.h>
#include <stdlib.h>

struct node {
	int info;
	struct node * next;
};

void insert(struct node ** head, int value);
int delete_head(struct node ** head);
int find_fibo_index(int given_num);

int main()
{
	struct node * head = NULL;
	struct node * temp_ptr = NULL;
	int N;
	int i;
	int num;
	int temp_val;
	int fibo_index;

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d", &num);
		insert(&head, num);	
	}

	//Finding and printing required indices

	for (i = 0; i < N; i++) {
		temp_val = delete_head(&head);
		
		if (temp_val != -9999) {
			fibo_index = find_fibo_index(temp_val);
			printf("%d ", fibo_index);
		} else {
			break;
		}
	}
	printf("\n");
	
	return 0;
}

void insert(struct node ** head, int value)
{
	struct node * temp_node = NULL;
	struct node * temp_ptr = NULL;

	temp_node = (struct node *) malloc(sizeof (struct node));

	if (temp_node == NULL) {
		printf("Memory Overflow!\n");
	} else if (*head == NULL) {
		temp_node->info = value;
		temp_node->next = NULL;
		*head = temp_node;
	} else {
		for (temp_ptr = *head; temp_ptr->next != NULL; temp_ptr = temp_ptr->next);

		temp_node->info = value;
		temp_node->next = NULL;
		temp_ptr->next = temp_node;
	}
}

int delete_head(struct node ** head)
{
	int temp_val;
	struct node * temp_ptr = NULL;

	if (*head == NULL) {
		return -9999;
	} else {
		temp_val = (*head)->info;
		temp_ptr = *head;
		*head = (*head)->next;
		free(temp_ptr);
		return temp_val;
	}
}

int find_fibo_index(int given_num)
{
	int i;
	int sum_i;
	int sum_j;
	int sum_k;
	int fib_num;
	int flag;
	
	if (given_num == 0) {
		return 1;
	} else if (given_num == 1) {
		return 2;
	} else {
		flag = 0;
		sum_i = 0;
		sum_j = 1;
		fib_num = 1;

		for (i = 3; fib_num <= given_num; i++) {
			fib_num = sum_i + sum_j;
			sum_i = sum_j;
			sum_j = fib_num;
			
			if (fib_num == given_num) {
				return i;
			} else {
				flag = 0;
			}
		}
		
		if (flag == 0) {
			return 0;
		}
	}
}
