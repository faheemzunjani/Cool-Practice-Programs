// Program to find the square root of an integer using Babylonian Method
// Faheem Hassan Zunjani

#include<stdio.h>

void main(){

  int num;
  float root;

  printf("Enter no.: ");
  scanf("%d",&num);

  do
    { if(num<0)
	{ printf("Input number is negative! Enter a positive number! \n");
	  printf("Enter no.:");
	  scanf("%d",&num);
	}
    }while(num<0);

  float x=(float)num,y=1.0;

  while(x-y>0.00001)
    { x=(x+y)/2;
      y=num/x;
    }
  
  printf("Root of the number is: %f \n",x);

}
