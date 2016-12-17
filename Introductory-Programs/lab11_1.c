// Program to swap two values using call by reference 
// Faheem Hassan Zunjani
#include<stdio.h>

void swap_ref(int *p,int*q){
  *p=*p+*q;
  *q=*p-*q;
  *p=*p-*q;
}

int main(){
  int a,b;
  
  printf("Enter two numbers to be swapped: \n");
  printf("Enter A: ");
  scanf("%d",&a);
  printf("Enter B: ");
  scanf("%d",&b);

  swap_ref(&a,&b);

  printf("After swap: \n");
  printf("A: %d\n",a);
  printf("B: %d\n",b);

  return 0;
}
