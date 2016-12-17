#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10

struct node {
	int key;
	struct node * parent;
};

int is_tree(int graph[MAXSIZE][MAXSIZE], int V, struct node * hash_table[MAXSIZE]);
void make_set(struct node * hash_table[MAXSIZE], int V);
int find_set(struct node * hash_table[MAXSIZE], int V);
void union_set(struct node * hash_table[MAXSIZE], int V1, int V2);

int main()
{
	int graph[MAXSIZE][MAXSIZE];
	struct node * hash_table[MAXSIZE] = {NULL};
	int V;
	int i;
	int j;
	int flag;

	scanf("%d", &V);

	for (i = 1; i <= V; i++) {
		make_set(hash_table, i);
	}

	for (i = 1; i <= V; i++) {
		for (j = 1; j <= V; j++) {
			scanf("%d", &graph[i][j]);
		}
	}
	
	flag = is_tree(graph, V, hash_table);

	if (flag == 1) {
		printf("Yes\n");
	} else {
		printf("No\n");
	}

	return 0;
}

int is_tree(int graph[MAXSIZE][MAXSIZE], int V, struct node * hash_table[MAXSIZE])
{
	int i;
	int j;
	int flag; 

	flag = 1;

	for (i = 1; i <= V; i++) {
		for (j = 1; j <= V; j++) {
			if (graph[i][j] == 1) {
				if (find_set(hash_table, i) == find_set(hash_table, j)) {
					flag = 0;
					break;
				} else {
					union_set(hash_table, i, j);
					flag = 1;
				}
			}
		}
		if (flag == 0) {
			break;
		}
	}	

	return flag;
}

void make_set(struct node * hash_table[MAXSIZE], int V) 
{
	struct node * temp = NULL;

	temp = (struct node *) malloc(sizeof (struct node));

	temp->key = V;
	temp->parent = temp;

	hash_table[V] = temp;
}

int find_set(struct node * hash_table[MAXSIZE], int V)
{
	return hash_table[V]->parent->key;
}

void union_set(struct node * hash_table[MAXSIZE], int V1, int V2)
{
	int rep1;
	int rep2;

	rep1 = find_set(hash_table, V1);
	rep2 = find_set(hash_table, V2);

	hash_table[rep2]->parent = hash_table[rep1];
}
