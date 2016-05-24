#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 1000

struct node {
	int data;
	int rank;
	struct node * parent;
	struct node * child;
};

void make_set(struct node * hash_table[], int element);
int find_set(struct node * hash_table[], int element);
void union_set(struct node * hash_table[], int rep_element1, int rep_element2);

int main()
{
	struct node * hash_table[MAXSIZE] = {NULL};
	int N;
	char choice[10];
	char choice2[10];
	int element;
	int rep_element;
	int rep_element1;
	int rep_element2;

	do {
		scanf("%s", choice);
		
		switch (choice[0]) {
			case 'm' : scanf("%s %d", choice2, &element);
				   make_set(hash_table, element);
				break;
			case 'f' : scanf("%s %d", choice2, &element);
				   rep_element = find_set(hash_table, element);
				   printf("%d\n", rep_element);
				break;
			case 'u' : scanf("%d %d", &rep_element1, &rep_element2);
				   union_set(hash_table, rep_element1, rep_element2);
				break;
			case 'e' : break;
			default  : printf("Incorrect command!\n");
				break;
		}
	} while (choice[0] != 'e');

	return 0;
}

void make_set(struct node * hash_table[], int element)
{
	struct node * temp_ptr = NULL;

	temp_ptr = (struct node *) malloc(sizeof (struct node));

	if (temp_ptr == NULL) {
		printf("Memory Overflow!\n");
	} else {
		temp_ptr->data = element;
		temp_ptr->rank = 0;
		temp_ptr->child = NULL;
		temp_ptr->parent = temp_ptr;
		hash_table[element] = temp_ptr;
	}
}

int find_set(struct node * hash_table[], int element)
{
	struct node * temp_ptr = NULL;

	temp_ptr = hash_table[element];

	return (temp_ptr->parent)->data;
}

void union_set(struct node * hash_table[], int rep_element1, int rep_element2)
{
	struct node * temp_ptr1 = NULL;
	struct node * temp_ptr2 = NULL;
	struct node * temp_ptr = NULL;

	temp_ptr1 = hash_table[rep_element1];
	temp_ptr2 = hash_table[rep_element2];
	
	/* Union by Rank */

	if (temp_ptr1->rank == temp_ptr2->rank) {
		temp_ptr2->parent = temp_ptr1;
		temp_ptr1->child = temp_ptr2;
		(temp_ptr1->rank)++;

		/* Path compression */

		for (temp_ptr = temp_ptr2; temp_ptr->child != NULL; temp_ptr = temp_ptr1->child) {
			temp_ptr->rank = 0;
			temp_ptr->parent = temp_ptr1;
		}
		
		temp_ptr1->rank = 1;
	} else if (temp_ptr1->rank > temp_ptr2->rank) {
		temp_ptr2->parent = temp_ptr1;
		temp_ptr1->child = temp_ptr2;
	} else {
		temp_ptr1->parent = temp_ptr2;
		temp_ptr2->child = temp_ptr1;
	}
		
}

