// Program to display first 'n' numbers of the fibonacci sequence: 0, 1, 1, 2, 3..
// Faheem Hassan Zunjani

#include<stdio.h>

void main(){

  int n,num1=0,num2=1,num3=0,i=2;

  printf("Enter n(>=2) : ");
  scanf("%d",&n);

  printf("\n 0, 1");

  for(i=2;i<n;i++)
    { num3=num1+num2;
      printf(", %d",num3);
      num1=num2;
      num2=num3;
    }

  printf("\n");
}
