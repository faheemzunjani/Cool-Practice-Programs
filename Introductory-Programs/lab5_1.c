// Program to find min and max of a randomly assigned array
// Faheem Hassan Zunjani

#include<stdio.h>
#include<stdlib.h>

void main(){
  int A[1000],n,i=0,j=0,k=0,l=0;
  time_t t;

  printf("Enter n: ");
  scanf("%d",&n);

  srand((unsigned) time(&t));

  for(i=0;i<n;i++)
    { A[i]=rand()%101;
    }

  printf("Current array: \n");
  
  for(j=0;j<n;j++)
    { printf("%d ",A[j]);
    }
  printf("\n");

  int min=A[0],max=A[0];

  for(k=0;k<n;k++)
    { if(A[k]<min)
	{ min=A[k];
	}
      if(A[k]>max)
	{ max=A[k];
	}
    }

  printf("The minimum value: %d \n",min);
  printf("The maximum value: %d \n",max);
  printf("\n");
}
      
