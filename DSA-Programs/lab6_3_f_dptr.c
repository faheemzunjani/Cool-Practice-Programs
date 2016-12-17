#include <stdio.h>
#include <stdlib.h>

struct node {
	int info;
	struct node * next;
};

void insert_beg(struct node ** head, int value);
void insert_last(struct node ** head, int value);
void insert_after_x(struct node ** head, int value, int x);
int delete_head(struct node ** head);
void print_all(struct node * head);
void print_odd(struct node * head);
int size(struct node * head);
int search(struct node * head, int value);

int main()
{	
	struct node * head = NULL;		
	int ix_element;
	int i_element;
	int d_element;
	int l_size;
	int value;
	int result;
	int ch;
	char choice[100];
	char inp_type[100];

	ch = 1;
	result = 0;

	do {
		scanf("%s", choice);		
		
		if (choice[0] == 'i' && choice[1] == 'n') {
			scanf(" %s %d", inp_type, &i_element);
			
			if (inp_type[0] == 'b') {
				insert_beg(&head, i_element);
			} else if (inp_type[0] == 'l') {
				insert_last(&head, i_element);
			} else if (inp_type[0] == 'a') {
				scanf(" %d", &ix_element);
				insert_after_x(&head, ix_element, i_element);
			}
		} else if (choice[0] == 'd') {
			scanf(" %s", inp_type);

			if (head == NULL) {
				printf("Deletion Unsuccessful! List is empty!\n");
			} else {
				d_element = delete_head(&head);
				printf("%d\n", d_element);
			}	
		} else if (choice[0] == 'p') {
			scanf(" %s", inp_type);
			
			if (inp_type[0] == 'a') {
				if (head == NULL) {
					printf("List is empty!\n");
				} else {
					print_all(head);
				}
			} else if (inp_type[0] == 'o') {
				if (head == NULL) {
					printf("List is empty!\n");
				} else {
					print_odd(head);
				}
			}
		} else if (choice[0] == 's' && choice[1] == 'i') {
			if (head == NULL) {
				printf("0\n");
			} else {
				l_size = size(head);
				printf("%d\n", l_size);
			}   
		} else if (choice[0] == 's' && choice[1] == 'e') {
			scanf(" %d", &value);
			
			if (head == NULL) {
				printf("List is empty!\n");
			} else {
				result = search(head, value);
				
				if (result == 0) {
					printf("false\n");
				} else {
					printf("true\n");
				}
			}
		} else if (choice[0] == 'e' && choice[1] == 'x') {
			ch = 0;
		} else {
			printf("Invalid choice!\n");
		}

	} while (ch == 1);

	return 0;
}

void insert_beg(struct node ** l_head, int value)
{
	struct node * temp_node = NULL;
	
	temp_node = (struct node *) malloc(sizeof(struct node));
	
	if (temp_node == NULL) {
		printf("Memory Overflow!\n");
	} else if (*l_head == NULL) {
		temp_node->next = NULL;
		temp_node->info = value;
		*l_head = temp_node;
	} else {
		temp_node->info = value;
		temp_node->next = *l_head;
		*l_head = temp_node;
	}

}

void insert_last(struct node ** l_head, int value)
{
	struct node * temp_node = NULL;
	struct node * temp_ptr = NULL;

	temp_node = (struct node *) malloc(sizeof(struct node));
	temp_ptr = *l_head;

	if (temp_node == NULL) {
		printf("Memory Overflow!\n");
	} else {
		for (temp_ptr = *l_head; temp_ptr->next != NULL; temp_ptr = temp_ptr->next);
		temp_node->info = value;
		temp_node->next = NULL;
		temp_ptr->next = temp_node;
	}

}

void insert_after_x(struct node ** l_head, int value, int x)
{
	struct node * temp_node = NULL;
	struct node * temp_ptr = NULL;

	temp_node = (struct node *) malloc(sizeof(struct node));
	temp_ptr = *l_head;

	if (temp_node == NULL) {
		printf("Memory Overflow!\n");
	} else {
		for (temp_ptr = *l_head; temp_ptr->info != x; temp_ptr = temp_ptr->next);

		temp_node->info = value;
		temp_node->next = temp_ptr->next;
		temp_ptr->next = temp_node;
	}
	
}

int delete_head(struct node ** l_head)
{
	struct node * temp_node = NULL;
	int temp_val;

	temp_node = *l_head;
	temp_val = temp_node->info;
	*l_head = (*l_head)->next;

	free(temp_node);

	return temp_val;

}

void print_all(struct node * head)
{
	struct node * temp_ptr = NULL;

	for (temp_ptr = head; temp_ptr != NULL; temp_ptr = temp_ptr->next) {
		printf("%d ", temp_ptr->info);
	}
	printf("\n");
}

void print_odd(struct node * head)
{
	struct node * temp_ptr = NULL;
	int i;

	i = 1;

	for (temp_ptr = head; temp_ptr != NULL; temp_ptr = temp_ptr->next, i *= (-1)) {
		if (i == 1) {
			printf("%d ", temp_ptr->info);
		}
	}
	printf("\n");
}

int size(struct node * head)
{
	struct node * temp_ptr = NULL;
	int l_size;
	
	l_size = 1;

	for (temp_ptr = head; temp_ptr->next != NULL; temp_ptr = temp_ptr->next, l_size++);

	return l_size;
}

int search(struct node * head, int value)
{
	int result;
	struct node * temp_ptr = NULL;

	result = 0;

	for (temp_ptr = head; temp_ptr != NULL; temp_ptr = temp_ptr->next) {
		if (temp_ptr->info == value) {
			result = 1;
			break;
		} else {
			continue;
		}
	}

	return result;
}
