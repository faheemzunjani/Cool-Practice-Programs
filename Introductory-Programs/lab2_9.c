// Program to print the position of input number in a range
// Faheem Hassan Zunjani

#include<stdio.h>

void main(){

  int no;

  printf("Enter no in the range 1-1000:");
  scanf("%d",&no);

  if(no==1)
    { printf("Exactly Smallest!");
    }
  else if(no<100)
    { printf("Number is low!");
    }
  else if(no==500)
    { printf("Exactly Middle!");
    }
  else 
    { printf("Nothing special about the no!");
    }

}

