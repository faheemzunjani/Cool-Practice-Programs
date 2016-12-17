// Program to create a Linked List with n nodes and delete the nodes with odd values

#include<stdio.h>
#include<stdlib.h>

typedef struct NODE{
	int val;
	struct NODE *link;
} node;

node* createList(node *header,int n){
	node *ptr=header;
	int i=0,num=0;

	for(i=0;i<n;i++){
		node *tempNode=(node*)malloc(sizeof(node));
		scanf("%d",&num);
		if(i==0){
			tempNode->val=num;
			tempNode->link=NULL;
			header=tempNode;
			ptr=header;
		}
		else{
			tempNode->val=num;
			tempNode->link=NULL;
			ptr->link=tempNode;
			ptr=tempNode;
		}
	}

	return header;
}
	

node* deleteOddNodes(node *header, int n){
	int i=0;
	
	node *ptrNode=header;
	node *tempNode=header;
	node *prevNode=header;

	for(i=0;i<n;i++){
		if(((ptrNode->val%2)!=0)&&(ptrNode!=header)){
			tempNode=ptrNode;
			prevNode->link=ptrNode->link;
			ptrNode=ptrNode->link;
			free(tempNode);
		}
		else if(((ptrNode->val%2)!=0)&&(ptrNode==header)){
			tempNode=ptrNode;
			ptrNode=ptrNode->link;
			header=ptrNode;
			prevNode=ptrNode;
			free(tempNode);
		}
		else{
			prevNode=ptrNode;
			ptrNode=ptrNode->link;
		}
	}
	return header;

}	


void printList(node *header){
	node *ptr=header;
	
	for(;ptr!=NULL;){
		if(ptr->link!=NULL){
			printf("%d-",ptr->val);
		}
		else{
			printf("%d",ptr->val);
		}
		ptr=ptr->link;
	}
}

void deleteList(node *header){
	node *temp=header;
	node *ptr=header;

	for(;ptr!=NULL;){
		temp=ptr;
		ptr=ptr->link;
		free(temp);
	}
}
	
	
int main(){
	int n;
	node *headNode=NULL;

	scanf("%d",&n);

	headNode=createList(headNode,n);
	
	printList(headNode);
	printf("\n");
	
	headNode=deleteOddNodes(headNode,n);

	printList(headNode);	

	return 0;
}
