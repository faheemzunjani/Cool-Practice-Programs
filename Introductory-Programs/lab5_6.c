// Program to sort n numbers using selection sorting algorithm
// Faheem Hassan Zunjani

#include<stdio.h>

void main(){
  int A[1000],n,i,j,k,l,m,temp;

  printf("Enter no. of elements: ");
  scanf("%d",&n);

  printf("Enter elements of the array: \n");
  for(i=0;i<n;i++)
    { scanf("%d",&A[i]);
    }
  
  int min=A[0],mini=0;

  for(k=0;k<n;k++)
    { min=A[k];
      for(l=k+1;l<n;l++)
	{ if(A[l]<min)
	    { min=A[l];
	      mini=l;
	    }
	}
      if(k!=(n-1))
	{ temp=A[k];
	  A[k]=min;
	  A[mini]=temp;
	  temp=0;
	  mini=k+1;
	}
    }

  printf("The sorted array is: \n");
  
  for(m=0;m<n;m++)
    { printf("%d ",A[m]);
    }
  printf("\n");

}

					  
