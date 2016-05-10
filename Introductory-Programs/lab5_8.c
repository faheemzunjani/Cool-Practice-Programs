// Program to store first n fibonacci numbers in an array
// Faheem Hassan Zunjani

#include<stdio.h>

void main(){ 
  int A[1000],n,i,k,num1=0,num2=1,num3;

  printf("Enter n: ");
  scanf("%d",&n);
  
  A[0]=0;
  A[1]=1;

  for(i=2;i<n;i++)
    { num3=num1+num2;
      A[i]=num3;
      num1=num2;
      num2=num3;
    }

  for(k=0;k<n;k++)
    { printf("%d ",A[k]);
    }
  printf("\n");
}
