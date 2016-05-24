#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10

struct node {
	int key;
	struct node * parent;
};

struct pq_element {
	int V1;
	int V2;
	int weight;
};

void make_set(struct node * hash_table[MAXSIZE], int V);
int find_set(struct node * hash_table[MAXSIZE], int V);
void union_set(struct node * hash_table[MAXSIZE], int V1, int V2);
void priority_enqueue(struct pq_element edge_queue[MAXSIZE], int * N, int V1, 
															int V2, int weight);
struct pq_element priority_dequeue(struct pq_element edge_queue[MAXSIZE], int * N);
int is_pq_empty(struct pq_element edge_queue[MAXSIZE], int * N);
void form_kruskal_mst(int graph[MAXSIZE][MAXSIZE], int V, int edge_weights[MAXSIZE][MAXSIZE],
							struct node * hash_table[MAXSIZE], struct pq_element mst[MAXSIZE]);

int main()
{
	int graph[MAXSIZE][MAXSIZE];
	int edge_weights[MAXSIZE][MAXSIZE];
	struct node * hash_table[MAXSIZE] = {NULL};
	struct pq_element edge_queue[MAXSIZE];
	struct pq_element mst[MAXSIZE];
	int i;
	int j;
	int k;
	int l;
	int T;
	int V;
	int N;

	freopen("kruskal_mst_inp.txt", "r", stdin);

	scanf("%d", &T);

	for (i = 0; i < T; i++) {
		scanf("%d", &V);

		for (j = 1; j <= V; j++) {
			make_set(hash_table, j);

			for (k = 1; k <= V; k++) {
				scanf("%d", &graph[j][k]);
			}
		}

		for (j = 1; j <= V; j++) {
			for (k = 1; k <= V; k++) {
				scanf("%d", &edge_weights[j][k]);
			}
		}

		form_kruskal_mst(graph, V, edge_weights, hash_table, mst);

		for (l = 0; l < V - 1; l++) {
			printf("%d-%d   %d\n", mst[l].V1, mst[l].V2, mst[l].weight);
		}
		printf("\n");
	}

	fclose(stdin);

	return 0;
}

void make_set(struct node * hash_table[MAXSIZE], int V)
{
	struct node * temp = NULL;

	temp = (struct node *) malloc(sizeof (struct node));

	if (temp == NULL) {
		printf("Memory Overflow!\n");
	} else {
		temp->key = V;
		temp->parent = temp;
		hash_table[V] = temp;
	}
}

int find_set(struct node * hash_table[MAXSIZE], int V)
{
	return hash_table[V]->parent->key;
}

void union_set(struct node * hash_table[MAXSIZE], int V1, int V2)
{
	hash_table[V2]->parent = hash_table[V1]->parent;
}

void priority_enqueue(struct pq_element edge_queue[MAXSIZE], int * N, int V1, 
															int V2, int weight)
{
	int i;
	int j;

	if ((*N) == MAXSIZE - 1) {
		printf("Queue is full!\n");
	} else {
		for (i = 0; i < *N; i++) {
			if (edge_queue[i].weight > weight) {
				break;
			}
		}

		for (j = *N; j > i; j--) {
			edge_queue[j] = edge_queue[j - 1];
		}

		edge_queue[i].V1 = V1;
		edge_queue[i].V2 = V2;
		edge_queue[i].weight = weight;

		(*N)++;
	}
}

struct pq_element priority_dequeue(struct pq_element edge_queue[MAXSIZE], int * N)
{
	struct pq_element temp;
	int i;

	if (!is_pq_empty(edge_queue, N)) { 
		temp.V1 = edge_queue[0].V1;
		temp.V2 = edge_queue[0].V2;
		temp.weight = edge_queue[0].weight;

		for (i = 0; i < *N; i++) {
			edge_queue[i] = edge_queue[i + 1];
		}

		(*N)--;
	} else {
		temp.V1 = -9999;
		temp.V2 = -9999;
		temp.weight = -9999;
	}

	return temp;
}

int is_pq_empty(struct pq_element edge_queue[MAXSIZE], int * N)
{
	if (*N == 0) {
		return 1;
	} else {
		return 0;
	}
}

void form_kruskal_mst(int graph[MAXSIZE][MAXSIZE], int V, int edge_weights[MAXSIZE][MAXSIZE], 
							struct node * hash_table[MAXSIZE], struct pq_element mst[MAXSIZE])
{
	struct pq_element edge_queue[MAXSIZE];
	struct pq_element temp;
	int num_edges;
	int i;
	int j;
	int N;

	num_edges = 0;
	N = 0;

	for (i = 1; i <= V; i++) {
		for (j = 1; j <= V; j++) {
			if (edge_weights[i][j] != 0) {
				priority_enqueue(edge_queue, &N, i, j, edge_weights[i][j]);
				edge_weights[i][j] = 0;
				edge_weights[j][i] = 0;
			}
		}
	}

	for (i = 0; i < N; i++) {
		temp = priority_dequeue(edge_queue, &N);
		if (find_set(hash_table, temp.V1) != find_set(hash_table, temp.V2)) {
			mst[num_edges] = temp;
			num_edges++;
			union_set(hash_table, temp.V1, temp.V2);
		}
	}
}
























