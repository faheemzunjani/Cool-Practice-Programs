// Program to perform operations on linked list
// Faheem Hassan Zunjani

#include<stdio.h>
#include<stdlib.h>

struct node{
  int info;
  struct node *ptr;
};

struct node *top;

void create_list(){
  int ch,num;
  struct node *temp;
  
  do{
    printf("\n   Menu\n");
    printf("1. Make a new entry\n");
    printf("2. Stop\n");
    printf("Enter choice: ");
    scanf("%d",&ch);

    if(ch==1){
      temp=(struct node*)malloc(sizeof(struct node));
      if(temp==NULL){
	printf("Memory Overflow!\n");
      }
      else{
	printf("Enter number: ");
	scanf("%d",&num);
	temp->info=num;
	if(top==NULL){
	  top=temp;
	  top->ptr=NULL;
	}
	else{
	  temp->ptr=top;
	  top=temp;
	}
      }
    }   
  }while(ch!=2);

}

void insert_node(){
  int num,ch;
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node));

  struct node *tempN=top;
  struct node *tempP=top;

  if(temp==NULL){
    printf("\nMemory Overflow!\n");
  }
  else{
    if(top==NULL){
      printf("\nList empty! Create list first!\n");
    }
    else{
      
      printf("\n   Menu\n");
      printf("1. Insert at the beginning  of the list\n");
      printf("2. Insert at the end of the list\n");
      printf("Enter choice: ");
      scanf("%d",&ch);
      
      printf("\nEnter number: ");
      scanf("%d",&num);

      if(ch==1){
	temp->info=num;
	temp->ptr=top;
	top=temp;
	 
	printf("\n%d added to end of the list!\n",num);
      }
      else if(ch==2){
	while(tempN!=NULL){
	  tempP=tempN;
	  tempN=tempN->ptr;
	  
	}
	temp->info=num;
	temp->ptr=NULL;
	tempP->ptr=temp;
	 
	printf("\n%d added to the beginning of the list!\n",num);
      }
      else{
	printf("\nWrong choice!\n");
      }
     
    }
  }
}

void linear_search(){
  int num,pos=0;
  struct node *temp=top;
 
  if(top==NULL){
    printf("\nList is empty! Create list first!\n");
  }
  else{
    printf("\nEnter number to search: ");
    scanf("%d",&num);
    
    while(temp!=NULL){
      if(temp->info==num){
	printf("\n%d found at node %d of the list!\n",num,pos+1);
	break;
      }
      else{
	temp=temp->ptr;
      }
      pos++;
    }
  }
}

int main(){
  int ch=0;
  top=NULL;
  
  do{
    printf("\n\n   Menu\n");
    printf("1. Create a new linked list of integers\n");
    printf("2. Insert a new number in the list\n");
    printf("3. Search for a number in the list\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
    scanf("%d",&ch);
    
    switch(ch){
      case 1: create_list();
        break;
      case 2: insert_node();
        break;
      case 3: linear_search();
        break;
      case 4:
        break;
      default: printf("\nWrong choice! Enter again!\n");
	break;
    }

  }while(ch!=4);

  return 0;

}
