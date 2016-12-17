//Program to calculate nth term of a fibonacci series using recursive function
//Faheem Hassan Zunjani

#include<stdio.h>

int fib(int n){
  
  if((n==1)||(n==2)){
    return 1;
  }
  else{
    return fib(n-1)+fib(n-2);
  }

}

void main(){
  int n;

  printf("Enter n: ");
  scanf("%d",&n);

  printf("Term %d of fibonacci series is: %d \n",n,fib(n));

}
