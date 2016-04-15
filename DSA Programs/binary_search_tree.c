#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
	int data;
	struct node * left;
	struct node * right;
	struct node * parent;
};

void preorder_traversal(struct node * root);
void inorder_traversal(struct node * root);
void postorder_traversal(struct node * root);
int tree_minimum(struct node * node_ptr);
int tree_maximum(struct node * node_ptr);
int tree_successor(struct node * node_ptr);
int tree_predecessor(struct node * node_ptr);
void tree_insert(struct node ** root, int element);
void transplant(struct node ** root, struct node ** u, struct node ** v);
struct node * tree_minimum_node(struct node * node_ptr);
void tree_delete(struct node ** root, int x);

int main()
{
	char choice[100];
	char choice2[100];
	int element;
	struct node * root = NULL;

	do {
		scanf("%s", choice);

		if (!strcmp(choice, "preorder\0")) {
			preorder_traversal(root);
			printf("\n");
		} else if (!strcmp(choice, "postorder\0")) {
			postorder_traversal(root);
			printf("\n");
		} else if (!strcmp(choice, "inorder\0")) {
			inorder_traversal(root);
			printf("\n");
		} else if (!strcmp(choice, "insert\0")) {
			scanf(" %d", &element);
			tree_insert(&root, element);
		} else if (!strcmp(choice, "successor\0")) {
			scanf(" %d", &element);
			tree_insert(&root, element);
		} else if (!strcmp(choice, "insert\0")) {
			scanf(" %d", &element);
			tree_insert(&root, element);
		} else if (!strcmp(choice, "delete\0")) {
			scanf(" %d", &element);
			tree_delete(&root, element);
		}				
	} while (strcmp(choice, "exit\0"));

	return 0;
}

void preorder_traversal(struct node * root) 
{
	if (root != NULL) {
		printf("%d ", root->data);
		preorder_traversal(root->left);
		preorder_traversal(root->right);
	}
}

void inorder_traversal(struct node * root) 
{
	if (root != NULL) {
		preorder_traversal(root->left);
		printf("%d ", root->data);
		preorder_traversal(root->right);
	}
}

void postorder_traversal(struct node * root) 
{
	if (root != NULL) {
		preorder_traversal(root->left);
		preorder_traversal(root->right);
		printf("%d ", root->data);
	}
}

int tree_minimum(struct node * node_ptr)
{
	node_ptr = node_ptr->right;

	while (node_ptr->left != NULL) {
		node_ptr = node_ptr->left;
	}

	return node_ptr->data;
}

struct node * tree_minimum_node(struct node * node_ptr)
{
	node_ptr = node_ptr->right;

	while (node_ptr->left != NULL) {
		node_ptr = node_ptr->left;
	}

	return node_ptr;
}


int tree_maximum(struct node * node_ptr)
{
	node_ptr = node_ptr->left;

	while (node_ptr->right != NULL) {
		node_ptr = node_ptr->right;
	}

	return node_ptr->data;
}

int tree_successor(struct node * node_ptr)
{
	struct node * node_ptr2 = NULL;

	if (node_ptr->right != NULL) {
		return tree_minimum(node_ptr);
	} else {
		node_ptr2 = node_ptr->parent;
		while (node_ptr2 != NULL && node_ptr == node_ptr2->right) {
			node_ptr = node_ptr2;
			node_ptr2 = node_ptr2->parent;
		}

		return node_ptr2->data;
	}
}

int tree_predecessor(struct node * node_ptr)
{
	struct node * node_ptr2 = NULL;

	if (node_ptr->left != NULL) {
		return tree_maximum(node_ptr);
	} else {
		node_ptr2 = node_ptr->parent;
		while (node_ptr2 != NULL && node_ptr == node_ptr2->left) {
			node_ptr = node_ptr2;
			node_ptr2 = node_ptr2->parent;
		}
		
		return node_ptr2->data;
	}
}

void tree_insert(struct node ** root, int element)
{
	struct node * temp_ptr = NULL;
	struct node * temp_parent = NULL;
	struct node * temp_child = NULL;

	temp_ptr = (struct node *) malloc(sizeof (struct node));

	if (temp_ptr == NULL) {
		printf("Memory Overflow!\n");
	} else {
		temp_ptr->data = element;
		temp_ptr->left = NULL;
		temp_ptr->right = NULL;

		if (*root == NULL) {
			temp_ptr->parent = NULL;	
			*root = temp_ptr;
		} else {
			temp_child = *root;
	
			while (temp_child != NULL) {
				temp_parent = temp_child;
				if (element > temp_child->data) {
					temp_child = temp_child->right;
				} else {
					temp_child = temp_child->left;
				}
			}
	
			if (element <= temp_parent->data) {
				temp_parent->left = temp_ptr;
				temp_ptr->parent = temp_parent;
			} else {
				temp_parent->right = temp_ptr;
				temp_ptr->parent = temp_parent;
			}
		}
	}
}

void transplant(struct node ** root, struct node ** u, struct node ** v)
{
	if ((*u)->parent == NULL) {
		*root = *v;
	} else {
		if (*u == (*u)->parent->left) {
			(*u)->parent->left = *v;
		} else {
			(*u)->parent->right = *v;
		}

		if (*v != NULL) {
			(*v)->parent = (*u)->parent;
		}
	}
}

void tree_delete(struct node ** root, int x)
{
	struct node * temp_ptr = NULL;

	if (*root == NULL) {
		return;
	} else if (x < (*root)->data) {
		tree_delete(&((*root)->left), x);
	} else if (x > (*root)->data) {
		tree_delete(&((*root)->right), x);
	} else if ((*root)->left != NULL && (*root)->right != NULL) {
		(*root)->data = (tree_minimum_node(*root))->data;
		tree_delete(&((*root)->right), (*root)->data);
	} else {
		temp_ptr = *root;
		if ((*root)->left != NULL) {
			*root = (*root)->left;
		} else {
			*root = (*root)->right;
		}

		free(temp_ptr);
	}
}


