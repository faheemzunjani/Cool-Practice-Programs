// Program to print the last lexicographic name among n names
// Faheem Hassan Zunjani

#include<stdio.h>
#include<string.h>

char* strcompare(char* A,char* B){
  int lenA=strlen(A);
  int lenB=strlen(B);
  int i=0;
  char min[1000];
  strcpy(min,A);

  for(i=0;(i<lenA)||(i<lenB);i++)
    { if(A[i]<B[i])
	{ strcpy(min,A);
	  break;
	}
      else if(B[i]<A[i])
	{ strcpy(min,B);
	  break;
	}
      else
	{ continue;
	}
    }
  return min;
}

void main(){
  char A[1000][1000],temp[1000];
  int n,i,j,k,l,m;

  printf("Enter no. of names: ");
  scanf("%d",&n);

  printf("Enter names: \n");
  for(i=0;i<n+1;i++)
    { gets(A[i]);
    }
  
  char mins[1000];

  strcpy(mins,A[0]);
  int mini=0,len1=0,len=0;

  for(k=0;k<n;k++)
    { strcpy(mins,A[k]);

      for(l=k+1;l<n;l++)
	{ strcpy(mins,strcompare(mins,A[l]));
	  if(!strcmp(mins,A[l]))
	    { mini=l;
	    }
	}
      if(k!=(n-1))
	{ strcpy(temp,A[k]);
	  strcpy(A[k],mins);
	  strcpy(A[mini],temp);
	  strcpy(temp,"0");
	  mini=k+1;
	}
    }

  printf("\nThe last name in lexicographic order is: %s \n",A[n]);
  
  printf("\n");

}

					  
