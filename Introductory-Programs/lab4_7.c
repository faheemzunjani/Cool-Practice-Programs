// Program to generate all possible combinatorions
// for given 'r'
// Faheem Hassan Zunjani

#include<stdio.h>

void main(){

  int i=1,j=1,k=1,l=1,r,n,p=1;

  printf("This program generates all possible 'r' combinatorions! \n");
  printf("Enter r: ");
  scanf("%d",&r);
  printf("Enter n: ");
  scanf("%d",&n);
  
  printf("\n");

 
  for(i=1;i<=n;i++)
    { for(j=i;j<=n;j++)
	{ for(k=j;k<=n;k++)
	    { printf("%d%d%d ",i,j,k);
	      if(p%3==0)
		{ printf("\n");
		}
	      p++;
	    }
	}
    }

 
  
}
