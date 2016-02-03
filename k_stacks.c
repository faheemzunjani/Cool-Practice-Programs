/*
	Faheem Hassan Zunjani
	Implementing K stacks in a given array of size 10000 of integers.
	First line contains K.
	Next line contains N for the number of commands to follow.
	Syntax of the commands : 
		push <stack_no> <value>
		pop <stack_no>
		top <stack_no>
		size <stack_no>
	Example :
		10
		3 
		push 1 12
		push 1 13
		top 1
		
		Expected Output : 
			13
*/

#include <stdio.h>

void push(int A[10000], int K, int stk_no, int value);
int pop(int A[10000], int K, int stk_no);
int top(int A[10000], int K, int stk_no);
int size(int A[10000], int K, int stk_no);
int atoi(char ch);

int main()
{
	int A[10000];
	int K;
	int N;
	int stk_no;
	int push_element;
	int pop_element;
	int top_element;
	int stk_size;
	int i;
	int j;
	int buffer;
	char inp_command[100];

	for (i = 0; i < 10000; i++) {
		A[i] = -9999;
	}

	scanf("%d", &K);
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		stk_no = 0;
		push_element = 0;
		char inp_command[100];

		scanf("%s %d", inp_command, &stk_no);

		if (inp_command[0] == 'p' && inp_command[1] == 'u') {	
			scanf("%d", &push_element);

			push(A, K, stk_no, push_element);
		} else if (inp_command[0] == 'p' && inp_command[1] == 'o') {			
			pop_element = pop(A, K, stk_no);
			
			printf("%d\n", pop_element);
		} else if (inp_command[0] == 't') {
            		top_element = top(A, K, stk_no);

			printf("%d\n", top_element);
		} else if (inp_command[0] == 's') {
            		stk_size = size(A, K, stk_no);

			printf("%d\n", stk_size);
		}
	
	}	
	
	return 0;
}

void push(int A[10000], int K, int stk_no, int value)
{
	int i;

	i = K * (stk_no - 1);
	
	for (; A[i] != -9999; i++);

	A[i] = value;	
}

int pop(int A[10000], int K, int stk_no)
{
	int i;
	int pop_element;
	
	i = K * (stk_no - 1);
	
	for (; A[i] != -9999; i++);
	
	i--;
	pop_element = A[i];
	A[i] = -9999;

	return pop_element;
}

int top(int A[10000], int K, int stk_no)
{
        int i;
        int top_element;

        i = K * (stk_no - 1);

        for (; A[i] != -9999; i++);

        i--;
        top_element = A[i];
        
        return top_element;
}

int size(int A[10000], int K, int stk_no)
{
        int i;
        int size;

        i = K * (stk_no - 1);
	size = 1;

        for (; A[i] != -9999; i++) {
		size++;
	}

        return size;
}

int atoi(char ch)
{
	switch (ch) {
		case '0' : return 0;
		case '1' : return 1;
		case '2' : return 2;
		case '3' : return 3;
                case '4' : return 4;
                case '5' : return 5;
		case '6' : return 6;
                case '7' : return 7;
                case '8' : return 8;
		case '9' : return 9;
	}
} 
