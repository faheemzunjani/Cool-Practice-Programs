// Program to check if a no. is Armstrong No. or not
// Faheem Hassan Zunjani

#include<stdio.h>
#include<math.h>

void main(){

  int num,sum=0,dig=0,tempNum=0;

  printf("Enter no. : ");
  scanf("%d",&num);

  printf("\n");

  tempNum=num;

  for(;tempNum!=0;)
    { dig=tempNum%10;
      sum=sum+pow(dig,3);
      tempNum=tempNum/10;
    }

  if(sum==num)
    { printf("%d is an Armstrong number! \n",num);
    }
  else
    { printf("%d is not an Armstrong number! \n",num);
    }

}

  
