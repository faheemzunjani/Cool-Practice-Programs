// Program to search an element in an array using Binary Search
// Faheem Hassan Zunjani

#include<stdio.h>

void main(){
  int A[1000],n,sEl,i,j,beg,mid,end,flag=0;

  printf("Enter no. of elements: ");
  scanf("%d",&n);

  printf("Enter elements of the array(asc order): \n");
  for(i=0;i<n;i++)
    { scanf("%d",&A[i]);
    }
  
  printf("\nEnter element to be searched: ");
  scanf("%d",&sEl);
  
  beg=0;
  end=n-1;
  flag=0;
  
  for(j=0;(beg!=end)&&(flag==0);j++)
    { mid=(beg+end)/2;
      if(sEl<A[mid])
	{ end=mid-1;
	}
      else if(sEl>A[mid])
	{ beg=mid+1;
	}
      else
	{ flag=1;
	}
    }
  
  if(flag==1)
    { printf("%d found at position %d ! \n",sEl,(mid+1));
      printf("Number of comparisions req: %d \n",j);
    }
  else
    { printf("%d not found! \n ",sEl);
      printf("Number of comparisions req: %d \n",j);
    }
}
