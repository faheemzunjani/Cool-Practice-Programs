// Program to print the numbers between two numbers
// Faheem Hassan Zunjani

#include<stdio.h>

void main(){
  
  int a,b,high,low,i;
  
  printf("Enter two numbers a,b: ");
  scanf("%d,%d",&a,&b);

  if(a>b)
    { high=a;
      low=b;
    }
  else
    { high=b;
      low=a;
    }

  printf("No.s beetween %d and %d are: \n",low,high);

  for(i=low;i<=high;i++)
    { printf("%d \n",i);
    }
  printf("\n");
}
