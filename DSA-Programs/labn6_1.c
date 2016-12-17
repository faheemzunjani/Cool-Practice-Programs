#include <stdio.h>
#include <stdlib.h>

struct node {
	int info;
	struct node * next;
	struct node * prev;
};

struct node * ins_beg(struct node * head, struct node * tail, int value);
struct node * ins_last(struct node * head, struct node * tail, int value);
struct node * ins_after_x(struct node * head, struct node * tail, int value, int x);
struct node * delete_head(struct node * head, struct node * tail);
void print_all(struct node * head);
void print_odd(struct node * head);
int size(struct node * head);
int search(struct node * head, int value);
struct node * insertion_sort(struct node * head);

int main()
{
	struct node * head = NULL;
	struct node * tail = NULL;
	int value;
	int size_list;
	int del_value;
	int result;
	int x;
	char choice[100];
	char ch_type[100];

	do {
		scanf("%s", choice);
		
		switch (choice[0]) {
			case 'i'	:	scanf("%s", ch_type);
						if (ch_type[0] == 'b') {
							scanf("%d", &value);
							if (head == NULL) {
								head = ins_beg(head, tail, value);
								tail = head;
							} else {
								head = ins_beg(head, tail, value);
							}
						} else if (ch_type[0] == 'l') {
							scanf("%d", &value);
							if (tail == NULL) {
								tail = ins_last(head, tail, value);
								head = tail;
							} else {
								tail = ins_last(head, tail, value);
							}
						} else if (ch_type[0] == 'a'){
							scanf("%d %d", &x, &value);
							head = ins_after_x(head, tail, value, x);
						} else {
							head = insertion_sort(head);
						}
						break;
			case 'd'	:	if (head->next == NULL) {
							head = delete_head(head, tail);
							head = NULL;
							tail = NULL;
						} else {
							head = delete_head(head, tail);
						}
						break;
			case 'p'	:	scanf("%s", ch_type);
						if (ch_type[0] == 'a') {
							print_all(head);
						} else {
							print_odd(head);
						}
						break;
			case 's'	:	if (choice[1] == 'i') {
							size_list = size(head);
							printf("%d\n", size_list);
						} else {
							scanf("%d", &value);
							result = search(head, value);
							if (result == -1) {
								printf("Element not found!\n");
							} else {
								printf("Elemet found!\n");
							}
						}
						break;
		}
	} while (choice[0] != 'e');	
			
	return 0;
}

struct node * ins_beg(struct node * l_head, struct node * l_tail, int value)
{
	struct node * temp;

	temp = (struct node *) malloc(sizeof (struct node));

	if (l_head == NULL) {
		temp->info = value;
		temp->next = NULL;
		temp->prev = NULL;
		l_head = temp;
		l_tail = temp;
	} else {
		temp->info = value;
		temp->next = l_head;
		temp->prev = NULL;
		l_head = temp;
	}		
	return l_head;
}

struct node * ins_last(struct node * l_head, struct node * l_tail, int value)
{
	struct node * temp;

        temp = (struct node *) malloc(sizeof (struct node));

        if (l_tail == NULL) {
                temp->info = value;
                temp->next = NULL;
                temp->prev = NULL;
                l_head = temp;
                l_tail = temp;
        } else {
                temp->info = value;
                temp->prev = l_tail;
                temp->next = NULL;
		l_tail->next = temp;
                l_tail = temp;
        }
        return l_tail;
}

struct node * ins_after_x(struct node * head, struct node * tail, int value, int x)
{
	struct node * temp = NULL;
	struct node * new_node = NULL;
	temp = head;

	new_node = (struct node *) malloc(sizeof (struct node));

	for (temp = head; temp != NULL; temp = temp->next) {
		if (temp->info == x) {
			new_node->info = value;
			new_node->next = temp->next;
			new_node->prev = temp;
			temp->next->prev = new_node;
			temp->next = new_node;
			break;
		}
	}

	return head;	
}

struct node * delete_head(struct node * head, struct node * tail)
{
	struct node * temp = NULL;
	int t_val;

	temp = head;
	t_val = temp->info;
	if (head->next != NULL) {
		head = head->next;
		head->prev = NULL;
	} else {
		head = NULL;
		tail = NULL;
	}
	
	free(temp);
	printf("%d\n", t_val);

	return head;	
}

void print_all(struct node * head)
{
	struct node * temp = NULL;
	
	for (temp = head; temp != NULL; temp = temp->next) {
		printf("%d ", temp->info);
	}
	printf("\n");
}

void print_odd(struct node * head)
{
	struct node * temp = NULL;
	int flag;

	flag = 1;

	for (temp = head; temp != NULL; temp = temp->next, flag *= (-1)) {
		if (flag == 1) {
			printf("%d ", temp->info);
		}
	}
	printf("\n");
}

int size(struct node * head)
{
	struct node * temp = NULL;
	int l_size;

	l_size = 0;
	
	for (temp = head; temp != NULL; temp = temp->next, l_size++); 

	return l_size;
}

int search(struct node * head, int value)
{
	struct node * temp = NULL;
	
	for (temp = head; temp != NULL; temp = temp->next) {
		if (temp->info == value) {
			return 1;
		}
	}

	return -1;
}

struct node * insertion_sort(struct node * head)
{
	struct node * temp_i = NULL;
	struct node * temp_j = NULL;
	struct node * temp_node = NULL;
	int j_val;
		
	for (temp_j = head->next; temp_j != NULL; temp_j = temp_j->next) {
		j_val = temp_j->info;
		for (temp_i = temp_j->prev; (temp_i != NULL) && (temp_i->info > temp_j->info); ) {
			temp_i->next->info = temp_i->info;
			if (temp_i->prev == NULL) {
				break;
			} else {
				temp_i = temp_i->prev;
			}
		}
		temp_i->info = j_val; 
		/*
		temp_node->prev->next =  temp_node->next;
		temp_node->next->prev = temp_node->prev;
		temp_node->next = temp_i->next;
		*/	
	}

	return head;	
}

