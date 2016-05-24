#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10

struct node {
	int key;
	struct node * parent;
};

void make_set(struct node * hash_table[MAXSIZE], int V);
int find_set(struct node * hash_table[MAXSIZE], int V);
void union_set(struct node * hash_table[MAXSIZE], int V1, int V2);
int is_graph_connected(int graph[MAXSIZE][MAXSIZE], int V, struct node * hash_table[MAXSIZE]);

int main()
{
	int graph[MAXSIZE][MAXSIZE];
	struct node * hash_table[MAXSIZE] = {NULL};
	int i;
	int j;
	int k;
	int T;
	int V;
	int flag;

	freopen("is_graph_connected_inp.txt", "r", stdin);

	scanf("%d", &T);

	for (i = 0; i < T; i++) {
			scanf("%d", &V);

			for (j = 1; j <= V; j++) {
				make_set(hash_table, j);

				for (k = 1; k <= V; k++) {
					scanf("%d", &graph[j][k]);
				}
			}

			flag = is_graph_connected(graph, V, hash_table);

			if (flag == 1) {
				printf("Connected\n");
			} else {
				printf("Disconnected\n");
			}
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

int is_graph_connected(int graph[MAXSIZE][MAXSIZE], int V, struct node * hash_table[MAXSIZE])
{
	int i;
	int j;
	int flag;
	int count;
	int temp_parent;

	for (i = 1; i <= V; i++) {
		for (j = 1; j <= V; j++) {
			if (graph[i][j] == 1) {
				union_set(hash_table, i, j);
				graph[i][j] = 0;
				graph[j][i] = 0;
			}
		}
	}

	flag = 1;
	temp_parent = hash_table[1]->parent->key;

	for (i = 2; i <= V; i++) {
		if (hash_table[i]->parent->key != temp_parent) {
			flag = 0;
			break;
		}
	}

	return flag;
}
