#include <stdio.h>
 
int main(void) {
	int t,n,i;
	scanf("%d",&t);
	while(t--)
	 {
	     scanf("%d",&n);
	     if(n<=6)
	      {
	          printf("%d\n",-1);
	          continue;
	      }
	     printf("%d\n",n); 
	     printf("%d %d\n",1,2);
	     printf("%d %d\n",2,3);
	     printf("%d %d\n",3,4);
	     printf("%d %d\n",4,5);
	     printf("%d %d\n",2,6);
	     printf("%d %d\n",4,6);
	     printf("%d %d\n",3,7);
	      for(i=8;i<n+1;i++)
	       printf("%d %d\n",2,i);
	     printf("%d\n",6);  
	 }
	return 0;
} 