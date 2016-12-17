#include <stdio.h>

struct tree_node {
	int data;
	struct tree_node * right;
	struct tree_node * left;
};

void bst_insert(struct tree_node ** root, int element);
char bst_search(struct tree_node * root, int element);

int main()
{
	struct tree_node * root;
	
	scanf("%d", &N);
	
	for (i = 0; i < N; i++) {
		scanf("%d", &element);
		bst_insert(&root, element);	
	}	
	
	scanf("%d", &T);

	for (i = 0; i < T; i++) {
		scanf("%d", &element);
		printf("%c\n", bst_search(root, element));
	};

	return 0;
}

void bst_insert(struct tree_node ** head, int element)
{
	struct tree_node * temp = NULL;
	struct tree_node * temp_ptr = NULL;

	temp = (struct tree_node *) malloc(sizeof (struct tree_node));
	temp_ptr = root;

	if (temp == NULL) {
		printf("Memory Overflow!\n");
	} else 	if (*root == NULL) {
		temp->data = element;
		temp->right = NULL;
		temp->left = NULL;
		*root = temp;
	} else {
		while (temp_ptr != NULL) {
			if (element > temp_ptr->data && temp->right != NULL) {
				temp_ptr = temp_ptr->right
		}

}
