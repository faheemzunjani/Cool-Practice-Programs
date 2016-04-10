// Program to read 'n' real numbers and print the maximum of them
// Faheem Hassan Zunjani

#include<stdio.h>

void main(){
  int n,i;
  float num,min;

  printf("Enter n: ");
  scanf("%d",&n);
  
  printf("Enter no.s: \n");

  for(i=0;i<n;i++)
    { scanf("%f",&num);
      if(i==0)
	{ min=num;
	}
      else
	{ if(num<min)
	    { min=num;
	    }
	}
    }

  printf("\nMinimum among entered no.s: %f \n",min);
}
