// Program to find out the mean, median and mode of n numbers
// Faheem Hassan Zunjani

#include<stdio.h>
void main(){
  int n,A[1000],sum=0,k,min,l,mini,temp,i,j;

  printf("Enter n: ");
  scanf("%d",&n);

  printf("Enter n integers: \n");
  for(i=0;i<n;i++)
    { scanf("%d",&A[i]);
      sum=sum+A[i];
    }

  float mean=sum/n;
  int median,mode;

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

  if(n%2==0)
    { median=(A[(n/2)]+A[(n/2)-1])/2;
    }
  else
    { median=A[n/2];
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

  mode=maxI;

  printf("Mean: %f \n",mean);
  printf("Median: %d \n",median);
  if(maxFreq!=1)
    { printf("Mode: %d \n",mode);
    }
  else
    { printf("Mode: None \n");
    }

}
  
