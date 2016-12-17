//Program to implement binary search using recursive functions
//Faheem Hassan Zunjani

#include<stdio.h>

int num,A[1000],n,flag=0;

int bin_search(int begin,int stop){
  int beg=begin,end=stop;
  int mid=(beg+end)/2;

  if((beg!=n)&&(end!=(-1))){
    if(A[mid]==num){
      flag=1;
      return mid;
    }
    else if(num>A[mid]){
      beg=mid+1;
      return bin_search(beg,end);
    }
    else{
      end=mid-1;
      return bin_search(beg,end);
    }
  }
}

  


void main(){

  int i,pos;

  printf("Enter no. of numbers: ");
  scanf("%d",&n);

  printf("Enter numbers in asc. order: \n");
  
  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
  }

  printf("Enter number to be searched: ");
  scanf("%d",&num);
  
  pos=bin_search(0,(n-1));

  if(flag==1){
    printf("%d found at position %d in the array! \n",num,(pos+1));
  }
  else{
    printf("%d is not in the array! \n",num);
  }
}
    
    
    

