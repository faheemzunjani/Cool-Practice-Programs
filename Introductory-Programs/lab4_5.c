// Program to print nth term of e^x series
// Faheem Hassan Zunjani

#include<stdio.h>

void main(){

  int x,n,i=1;
  float term=1.0;

  printf("This program prints nth term of e^x series! \n");
  printf("Enter n :");
  scanf("%d",&n);
  printf("Enter x :");
  scanf("%d",&x);

  for(i=1;i<n;i++)
    { term=term*(x/i);
    }

  printf("nth term of e^x for x= %d is: %f ",x,term);

}
