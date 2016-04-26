// Program to print prime nos less than the input no
// Faheem Hassan Zunjani\

#include<stdio.h>

void main(){
  int num=0,tnum=0,i=0,flag=0;
  
  printf("Enter no: ");
  scanf("%d",&num);

  tnum=(num-1);
  
  printf("Prime no.s less than %d are: \n",num);

  while(tnum>0)
    {  i=(tnum-1);
       while(i>0)
	{  if(tnum%i!=0||i==1)
	    {  flag=1;
	    }
	   else 
	    {  flag=0;
	       break; 
	    }  
	   i--;
	}
       if(flag==1)
	{  printf("%d \n",tnum);
	}
       tnum--;
       flag=0;
    }  

}
