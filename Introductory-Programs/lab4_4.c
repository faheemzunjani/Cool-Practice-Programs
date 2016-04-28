// Program to find the GCD of two numbers
// Faheem Hassan Zunjani

#include<stdio.h>

void main(){

  int divr,divd,rem=1,num1,num2;

  printf("This program finds the GCD of two numbers! \n");
  printf("Enter two numbers as A,B:");
  scanf("%d,%d",&num1,&num2);

  if(num1>num2)
    { divd=num1;
      divr=num2;
    }
  else
    { divd=num2;
      divr=num1;
    }

  while(rem!=0)
    { rem=divd%divr;
      divd=divr;
      if(rem!=0)
	{ divr=rem;
	}
    }

  printf("GCD of %d and %d is : %d",num1,num2,divr);

}
