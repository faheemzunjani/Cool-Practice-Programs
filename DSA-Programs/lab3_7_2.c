#include <stdio.h>
#include <stdlib.h>

struct stack {
	unsigned int size;
	int * data;
};

int push_stack(struct stack * s_ptr, int * top, int new_element);
int pop_stack(struct stack * s_ptr, int * top);
int top_stack(struct stack s, int top);
int size_stack(struct stack s, int top);
int is_empty(struct stack s, int top);
int is_full(struct stack s, int top);
int create(struct stack * s_ptr, unsigned int max_size);

int main()
{	
	int ch;
	int top;
	int status;
	int top_element;
	int new_element;
	int pop_element;
	int flag;
	int size;
	unsigned int max_size;
	struct stack s;

	s.size = 100;
	
	top = -1;
	
	do {
		printf("\t\tMenu\n");
		printf("1. Push : Insert a new element\n");
		printf("2. Pop : Removes the top element\n");
		printf("3. Top : Last element inserted into the stack\n");
		printf("4. Size : No. of elements in the stack\n");
		printf("5. Is the stack empty?\n");
		printf("6. Is the stack full?\n");
		printf("7. Exit\n");
		printf("Enter choice: ");
		scanf("%d", &ch);

		switch (ch) {
			case 1:	printf("Enter the maximum size of stack you need: ");
				scanf("%d", &max_size);

				flag = create(&s, max_size);

				if (flag == 0) {
					printf("Stack creation unsuccessful! Try Again!\n\n");
				} else {
					printf("Enter new value to be pushed: ");
					scanf("%d", &new_element);
					status = push_stack(&s, &top, new_element);
					if (status == 1) {
						printf("%d pushed onto the stack!\n\n", new_element);
					}
				}
				break;

			case 2:	pop_element = pop_stack(&s, &top);
				if (pop_element != -9999) {
					printf("\n%d removed from stack!\n\n", pop_element);
				}
				break;

			case 3:	top_element = top_stack(s, top);
				if (top_element == -9999) {
					printf("Stack empty!\n");
				} else {	
					printf("%d is the top element in the stack!\n\n", top_element);
				}
				break;

			case 4: size = size_stack(s, top);
				printf("%d elements are present in the stack!\n\n", size);
				break;

			case 5: flag = is_empty(s, top);
				if (flag == 0) {
					printf("Stack is not empty!\n\n");
				} else {
					printf("Stack is empty!\n\n");
				}
				break;

			case 6:	flag = is_full(s, top);
				if (flag == 0) {
					printf("Stack is not full!\n\n");
				} else {
					printf("Stack is full!\n\n");
				}
				break;

			default: continue;
		}

	} while (ch != 7);

	return 0;
}

int push_stack(struct stack * s_ptr, int * top, int new_element)
{
	if (*top == (s_ptr->size-1)) {
		printf("Stack Overflow!\n\n");
		return 0;
	} else {
		*top = *top + 1;
		s_ptr->data[*top] = new_element;
		return 1;
	}
}

int pop_stack(struct stack * s_ptr, int * top)
{
	int pop_element;

	if (*top == -1) {
		printf("Stack Underflow!\n\n");
		return -9999;
	} else if (*top == 0) {
		pop_element = s_ptr->data[*top];
		*top = -1;
		return pop_element;
	} else {
		pop_element = s_ptr->data[*top];
		*top = *top - 1;
		return pop_element;
	}
}

int top_stack(struct stack s, int top) 
{
	if (top == -1)	{
		return -9999;
	} else {
		return 	s.data[top];
	}
}

int size_stack(struct stack s, int top)
{
	int size;

	size = 0;

	if (top == -1) {
		return 0;
	} else {
		for (size = 1; size <= top; size++);
		return size;
	}
}

int is_empty(struct stack s, int top) 
{ 
	if (top == -1) {
		return 1;
	} else {
		return 0;
	}
}

int is_full(struct stack s, int top)
{
	if (top == s.size) {
		return 1;
	} else {
		return 0;
	}
}

int create(struct stack * s_ptr, unsigned int max_size)
{
	s_ptr->data = (int *) malloc(max_size * sizeof(int));
	
	if (s_ptr->data == NULL) {
		return 0;
	} else {
		s_ptr->size = max_size;
		return 1;
	}
}
