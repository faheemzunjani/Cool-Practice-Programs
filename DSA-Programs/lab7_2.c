#include <stdio.h>
#include <stdlib.h>

struct node {
	int info;
	struct node * next;
	struct node * prev;
};

struct node * ins_beg(struct node * head, struct node * tail, int element);
void ins_end(struct node * head, struct node * tail, int element);
void insertion_sort(struct node * head, struct node * tail);

int main()
{	
	char type[100];
	char choice[100];
	int element;
	struct node * head = NULL;
	struct node * tail = NULL;
	struct node * temp = NULL;

	do {
		scanf("%s", choice);

		if (choice[0] == 'i') {
			scanf(" %s %d", type, &element);
			if (type[0] = 'b') {
				head = ins_beg(head, tail, element);
			} /* else if (type[0] == 'e'){
				ins_end(head, tail, element);
			} */
		} else if (choice[0] == 's') {

		
			for (temp = head; temp != NULL; temp = temp->next) {
				printf("%d ", temp->info);
			}
			printf("\n");
		
		} else {
			continue;
		}
	} while (choice[0] != 's');	
			
	return 0;
}

struct node * ins_beg(struct node * head, struct node * tail, int element)
{
	struct node * temp = NULL;
	
	temp = (struct node *) malloc(sizeof(struct node));
	
	if (temp == NULL) {
		printf("Memory Overflow!\n");
	} else if (head == NULL) {
		temp->info = element;
		temp->next = NULL;
		temp->prev = NULL;
		head = temp;
		tail = temp;
	} else {
		temp->info = element;
		head->prev = temp;
		temp->next = head;
		temp->prev = NULL;
		head = temp;
	}
	
	return head;
}

/*
void ins_end(struct node * head, struct node * tail, int element)
{
	struct node * temp = NULL;

        temp = (struct node *) malloc(sizeof(struct node));

        if (temp == NULL) {
                printf("Memory Overflow!\n");
        } else if (head == NULL) {
                temp->info = element;
                temp->next = NULL;
                temp->prev = NULL;
                head = temp;
                tail = temp;
        } else {
                temp->info = element;
                temp->next = NULL;
                temp->prev = tail;
		tail->next = temp;
                tail = temp;
        }
	
	//return tail;
}
*/

void insertion_sort(struct node * head, struct node * tail)
{
	struct node * i_ptr = NULL;
	struct node * j_ptr = NULL;

	i_ptr = head->next;
	j_ptr = head;
	

	return head;
}
