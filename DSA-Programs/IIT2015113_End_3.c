#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node * left;
	struct node * right;
};

void bst_insert(struct node ** root, int element);
void bst_right_rotation(struct node ** root);
void print_preorder(struct node * root);

int main()
{
	struct node * root = NULL;
	int N;
	int element;
	int i;

	scanf("%d", &N);
	
	for (i = 0; i < N; i++) {
		scanf("%d", &element);
		bst_insert(&root, element);
	}
	
	print_preorder(root);
	printf("\n");

	bst_right_rotation(&root);
	
	print_preorder(root);
	printf("\n");

	return 0;
}

void bst_insert(struct node ** root, int element)
{
	struct node * temp = NULL;
	struct node * temp_ptr = NULL;
	struct node * temp_parent = NULL;

	temp = (struct node *) malloc(sizeof (struct node));

	if (temp == NULL) {
		printf("Memory Overflow!\n");
	} else {
		temp->data = element;
		temp->right = NULL;
		temp->left = NULL;
		
		if (*root == NULL) {
			*root = temp;
		} else {
			temp_ptr = *root;

			while (temp_ptr != NULL) {
				temp_parent = temp_ptr;

				if (element <= temp_ptr->data) {
					temp_ptr = temp_ptr->left;
				} else {
					temp_ptr = temp_ptr->right;
				}
			}

			if (element <= temp_parent->data) {
				temp_parent->left = temp;
			} else {
				temp_parent->right = temp;
			}
		}	
	}

}

void bst_right_rotation(struct node ** root)
{
	struct node * temp = NULL;
	
	if ((*root)->left == NULL) {
		return ;
	}

	if (((*root)->left)->right == NULL) {
		((*root)->left)->right = (*root);
		(*root) = (*root)->left;
		((*root)->right)->left = NULL;
	} else {
		temp = ((*root)->left)->right;
		((*root)->left)->right = (*root);
		(*root) = (*root)->left;
		((*root)->right)->left = temp;
	}
}

void print_preorder(struct node * root)
{
	if (root == NULL) {
		return ;
	} else {
		printf("%d ", root->data);
	
		print_preorder(root->left);
		print_preorder(root->right);
	}
}
