// Program to input two names and print them in lexicographic order
// Faheem Hassan Zunjani

#include<stdio.h>

void main(){
  char name1[1000],name2[1000];
  int i,len1,len2,flag=0;

  printf("Enter Name1: ");
  gets(name1);
  printf("Enter Name2: ");
  gets(name2);

  for(len1=1;name1[len1]!='\0';len1++);
  for(len2=1;name2[len2]!='\0';len2++);

  printf("Names in lexicographic order: \n");

  for(i=0;(i<len1)||(i<len2);i++)
    { if(name1[i]<name2[i])
	{ flag=1;
	  break;
	}
      else if(name1[i]>name2[i])
	{ flag=2;
	  break;
	}
      else
	{ continue;
	}
    }

  if((flag==1)||(flag==0))
    { printf("%s\n%s\n",name1,name2);
    }
  else 
    { printf("%s\n%s\n",name2,name1);
    }
}
