// Program to convert a decimal number to an equivalent binary number
// Faheem Hassan Zunjani

#include<stdio.h>

void main(){
  int A[1000],i,j,k;
  long int num,tNum;
  
  printf("Enter decimal no.: ");
  scanf("%ld",&num);

  tNum=num;
  for(i=0;tNum!=0;i++)
    { A[i]=tNum%2;
      tNum=tNum/2;
    }

  printf("\nBinary equivalent: ");

  for(j=i;j>=0;j--)
    { printf("%d ",A[j]);
    }

  printf("\n");

}
