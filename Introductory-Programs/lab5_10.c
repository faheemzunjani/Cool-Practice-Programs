// Program to read n integers and print the integer with the highest frequency
// Faheem Hassan Zunjani

#include<stdio.h>

void main(){
  int A[1000],n,i,j,k;
  
  printf("Enter n: ");
  scanf("%d",&n);
  
  printf("Enter array of integers: \n");
  for(i=0;i<n;i++)				
    { scanf("%d",&A[i]);
    }

  int freq=0,maxFreq=1,maxI=A[0];
  for(j=0;j<n;j++)
    { for(k=j;k<n;k++)
	{ if(A[k]==A[j])
	    { freq++;
	    }
	}
      if(freq>maxFreq)
	{ maxFreq=freq;
	  maxI=A[j];
	}
      freq=0;
    }

  printf("\n%d has highest frequency and occurs %d times!",maxI,maxFreq);

}


