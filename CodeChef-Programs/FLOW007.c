#include<stdio.h>
 
int main(){
  int num,rev=0,i=0,T,dig;
  scanf("%d",&T);
  
  for(i=0;i<T;i++)
    { scanf("%d",&num);
      for(;num!=0;)
      { dig=num%10;
	     rev=rev*10+dig;
	     num=num/10;
	    }
      printf("%d\n",rev);
      rev=0;
    }
  return 0;
}
  