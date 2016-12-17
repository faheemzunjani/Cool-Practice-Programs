// Program to merge and sort two sorted linked lists into another linked list 
// Faheem Hassan Zunjani

#include<stdio.h>
#include<stdlib.h>

struct node{
  int info;
  struct node *ptr;
};

struct node *top1,*top2,*top;

void create_list_1(){
  top1=(struct node*)malloc(sizeof(struct node));
  int ch,num;

  if(top1==NULL){
    printf("Memory Overflow!\n");
  }
  else{
    printf("Create linked list 1: \n");
    printf("Enter number: ");
    scanf("%d",&num);
    top1->info=num;
    top1->ptr=NULL;

    do{
      struct node *temp1=(struct node*)malloc(sizeof(struct node));
      if(temp1==NULL){
	prinf("Memory Overflow!\n");
	ch=2;
      }
      else{
	printf("\n   Menu\n");
	printf("1. Insert node\n");
	printf("2. Stop\n");
	printf("Enter choice: ");
	scanf("%d",&ch);
	
	if(ch==1){
	  printf("Enter number: ");
	  scanf("%d",&num);
	  temp1->info=num;
	  temp1->ptr=top1;
	  top1=temp1;
	}
      }
    }while(ch!=2);
  }
}

void create_list_2(){
  top2=(struct node*)malloc(sizeof(struct node));
  int ch,num;

  if(top2==NULL){
    printf("Memory Overflow!\n");
  }
  else{
    printf("Create linked list 1: \n");
    printf("Enter number: ");
    scanf("%d",&num);
    top2->info=num;
    top2->ptr=NULL;

    do{
      struct node *temp2=(struct node*)malloc(sizeof(struct node));
      if(temp2==NULL){
	prinf("Memory Overflow!\n");
	ch=2;
      }
      else{
	printf("\n   Menu\n");
	printf("1. Insert node\n");
	printf("2. Stop\n");
	printf("Enter choice: ");
	scanf("%d",&ch);
	
	if(ch==1){
	  printf("Enter number: ");
	  scanf("%d",&num);
	  temp2->info=num;
	  temp2->ptr=top2;
	  top2=temp2;
	}
      }
    }while(ch!=2);
  }
}

void merge_sort(){
  
  struct node *tempTop1=top1;
  struct node *tempTop2=top2;
  if((tempTop1->info)<(tempTop2->info)){
    top=tempTop1->info;
    top->ptr=NULL;
    tempTop1=tempTop1->ptr;
  }
  else{
    top=tempTop2->info;
    top->ptr=NULL;
    tempTop2=tempTop2->ptr;
  }

  while((tempTop1==NULL)||(tempTop2==NULL)){
    struct node *temp=(struct node*)malloc(sizeof(struct node));

    if(temp==NULL){
      printf("\nMemory Overflow! Merging aborted!\n");
    }
    else{
      
      if((tempTop1->info)<(tempTop2->info)){
	temp=tempTop1->info;
	temp->ptr=top;
	top=temp;
	tempTop1=tempTop1->ptr;
      }
      else{
	temp=tempTop2->info;
	temp->ptr=top;
	top=temp;
	tempTop2=tempTop2->ptr;
      }
    }
  }
}

  

int main(){
  
  create_list_1();
  create_list_2();

  struct node *t1=top1;
  struct node *t2=top2;

  printf("Linked List 1 is: \n");
  
  while(t1!=NULL){
    printf("%d\n",t1->info);
    t1=t1->ptr;
  }

  printf("Linked List 2 is: \n");
  
  while(t2!=NULL){
    printf("%d\n",t2->info);
    t2=t2->ptr;
  }

  printf("\n\nMerging and Sorting both the Linked Lists........");

  printf("Merged and Sorted Resultant List: \n");

  struct node *t=top;
  while(t!=NULL){
    printf("%d\n",t->info);
    t=t->ptr;
  }

  return 0;
}
