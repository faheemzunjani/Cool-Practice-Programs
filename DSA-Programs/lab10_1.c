#include <stdio.h>
#define MAXSIZE 100

void bfs_traverse(int G[MAXSIZE][MAXSIZE], int N, int S);
void queue_insert(int Q[MAXSIZE], int * rear, int node);
int queue_delete(int Q[MAXSIZE], int * rear);
int is_queue_empty(int * rear);

int main()
{
	int N;
	int S;
	int G[MAXSIZE][MAXSIZE];
	int i;
	int j;
		
	scanf("%d %d", &N, &S);
	
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			scanf("%d", &G[i][j]);
		}
	}
		
	bfs_traverse(G, N, S);	

	return 0;
}


void bfs_traverse(int G[MAXSIZE][MAXSIZE], int N, int S)
{
	int Q[MAXSIZE];
	int V_i;
	int V_j;
	int count;
	int front;
	int rear;
	int node;
	int i;

	V_i = S;
	V_j = 1;
	rear = -1;

	for (count = 0; count < N; count++) {
		printf("%d ", V_i);

		for (V_j = 1; V_j <= N; V_j++) {
			if (G[V_i][V_j] == 1) {
				queue_insert(Q, &rear, V_j);
				G[V_j][V_i] = 0;

				for (i = 0; i < 5; i++) {
					G[i][V_j] = 0;
				}
			}
		}

		V_i = queue_delete(Q, &rear);
	}

	printf("\n");
}

void queue_insert(int Q[MAXSIZE], int * rear, int node)
{
	if (is_queue_empty(rear)) {
		*rear = 0;
		Q[0] = node;
	} else {
		(*rear)++;
		Q[*rear] = node;
	}
}

int queue_delete(int Q[MAXSIZE], int *rear)
{
	int temp;
	int i;

	if (is_queue_empty(rear)) {
		return -9999;
	} else {
		temp = Q[0];

		for (i = 0; i < (*rear); i++) {
			Q[i] = Q[i + 1];
		}

		(*rear)--;

		return temp;
	}
}

int is_queue_empty(int * rear)
{
	if (*rear == -1) {
		return 1;
	} else {
		return 0;
	}
}
