//Program to calculate the factorial using recursive functions
//Faheem Hassan Zunjani


#include<stdio.h>

long int fact(int n){
  if(n==1){
    return 1;
  }
  else{
    return n*fact(n-1);
  }
}

void main(){
  int n;

  printf("Enter n: ");
  scanf("%d",&n);

  printf("Factorial of %d is: %ld \n",n,fact(n));

}
