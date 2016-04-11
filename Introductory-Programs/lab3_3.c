// Program to find the average of 'n' numbers
// Faheem Hassan Zunjani

#include<stdio.h>

void main(){

  int n,i;
  float num,sum=0,avg;

  printf("Enter n: ");
  scanf("%d",&n);

  printf("Enter no.s: \n");

  for(i=0;i<n;i++)
    { scanf("%f",&num);
      sum=sum+num;
    }

  avg=sum/i;

  printf("\nAverage: %f \n",avg);
}
