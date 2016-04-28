// Program to print Floyd's triangle
// Faheem Hassan Zunjani

#include<stdio.h>

void main(){

  int i=0,j=0,n=0,num=1;

  printf("This program prints Floyd's traingle!\n");
  printf("Enter no of lines:");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
    { for(j=i;j>0;j--,num++)
        { printf("%d ",num);
	}
      printf("\n");
    }

}
