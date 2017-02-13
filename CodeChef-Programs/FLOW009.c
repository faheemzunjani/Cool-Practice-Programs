#include<stdio.h>
int main()
{ int quant,item,t,i;
 float total;
        
 
	scanf("%d",&t);
	
	for(i=0; i<t; i++)
	{ scanf("%d  %d", &quant,&item);
	  if(quant>1000)
	 { total=((quant*item));
		printf("%f \n",(total-((total*10)/100)));
	}
	else
	{ total=(quant*item);
		printf( "%f \n",total);
	}
 
	}
return 0;
} 