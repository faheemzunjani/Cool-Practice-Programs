// Program to search an element in an array using Linear Search
// Faheem Hassan Zunjani

#include<stdio.h>

void main(){
  int A[1000],n,sEl,i,j,k;
  
  printf("Enter size of array: ");
  scanf("%d",&n);
  
  printf("Enter elements of array: \n");
  
  for(i=0;i<n;i++)
    { scanf("%d",&A[i]);
    }
  
  printf("\nEnter element to be searched: ");
  scanf("%d",&sEl);

  for(j=0;j<n;j++)
    { if(A[j]==sEl)
	{ break;
	}
    }
  
  if(j==(n))
    { printf("Item not found! \n");
      printf("Number of comparisions req: %d \n",j);
    }
  else
    { printf("%d found at position %d ! \n",sEl,(j+1));
      printf("Number of comparisions req: %d \n",j);
    }
}
