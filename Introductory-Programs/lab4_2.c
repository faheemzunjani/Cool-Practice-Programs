// Program to print right bottom triangle 
// and left bottom triangle made of '*' 
// Faheem Hassan Zunjani

#include<stdio.h>

void main(){

  int i=0,j=0,k=0,l=0,m=0;
  char ch='*';

  for(i=0;i<5;i++)
    { for(j=i+1;j>0;j--)
	{  printf("%c",ch);
	}
      printf("\n");
    }

  printf("\n\n");

  for(k=0;k<5;k++)
    { for(l=4-k;l>0;l--)
	{  printf(" ");
	}
      for(m=k+1;m>0;m--)
	{  printf("%c",ch);
	}
      printf("\n");
    }

}
