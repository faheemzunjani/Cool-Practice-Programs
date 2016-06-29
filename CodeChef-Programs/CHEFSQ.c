#include<stdio.h>
 
int main(){
  int T,lN,N[1000],lF,F[1000];
  int i,j,k,l,m,n,counter=0,flag=0;
  scanf("%d",&T);
  for(i=0;i<T;i++)
    { scanf("%d",&lN);
      for(j=0;j<lN;j++)
	scanf("%d",&N[j]);
      scanf("%d",&lF);
      for(k=0;k<lF;k++)
	scanf("%d",&F[k]);
      for(m=0,n=0;m<lN&&flag==0;m++)
	{ if(N[m]==F[n])
	    { counter++;
	      n++;
	    }
	      if(counter==lF)
		{ flag=1;
		}
	      else
		{ flag=0;
		}
	    
	}
      if(flag==1)
	{ printf("Yes\n");
	}
      else
	{ printf("No\n");
	}
      counter=0;
      flag=0;
    }
 return 0;
}