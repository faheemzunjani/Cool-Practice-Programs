// Program to efficiently find first n prime numbers using arrays
// Faheem Hassan Zunjani

#include<stdio.h>

void main(){ 
  int A[1000],n,i,j,k;

  printf("Enter n: ");
  scanf("%d",&n);

  for(i=0;i<1000;i++)
    { A[i]=2+i;
    }

  for(j=0;j<1000;j++)
    { if((A[j]%2==0)&&(A[j]!=2))
	{ A[j]=0;
	}
      else if((A[j]%3==0)&&(A[j]!=3))
	{ A[j]=0;
	}
    }
  
  int counter=1;

  for(k=0;(k<1000)&&(counter<=n);k++)
    { if(A[k]!=0)
	{ printf("%d ",A[k]);
	  counter++;
	}
    }
  printf("\n");
}
