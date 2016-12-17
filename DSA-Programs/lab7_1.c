#include <stdio.h>
#include <stdlib.h>

struct node {
	int info;
	struct node * next;
	struct node * prev;
};

struct header {
	struct node * head;
	struct node * tail;
};

struct header insert(struct header t_header, int element);
struct header insertion_sort(struct header t_header);

int main()
{	
	struct header dl_header;
	char choice[100];
	int element;
	struct node * temp = NULL;

	dl_header.head = NULL;
	dl_header.tail = NULL;
	temp = dl_header.head;

	scanf("%s", choice);

	do {
		if (choice[0] == 'i') {
			scanf(" %d", &element);
			dl_header = insert(dl_header, element);
		} else if (choice[0] == 's'){
			//dl_header = insertion_sort(dl_header);
		
			for (temp = dl_header.head; temp->next != NULL; temp = temp->next) {
				printf("%d ", temp->info);
			}
			printf("\n");
		
		} else {
			continue;
		}
	} while (choice[0] != 's');	
			
	return 0;
}

struct header insert(struct header t_header, int element)
{
	struct node * temp = NULL;

	temp = (struct node *) malloc(sizeof(struct node));

	if (temp == NULL) {
		printf("Memory Overflow!\n");
	} else if (t_header.head == NULL) {
		temp->info = element;
		temp->next = NULL;
		temp->prev = NULL; 
		t_header.head = temp;
		t_header.tail = temp;
	} else {
		temp->info = element;
		temp->next = t_header.head;
		temp->prev = NULL;
		t_header.head->prev = temp;
		t_header.head = temp;
	}

	return t_header;
}

struct header insertion_sort(struct header t_header)
{
	return;
}
