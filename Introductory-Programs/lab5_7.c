// Program to find whether a string is pallindrome or not
// Faheem Hassan Zunjani

#include<stdio.h>

void main(){
  char A[1000],i,len=0,flag=0;

  printf("Enter string: ");
  gets(A);

  for(len=0;A[len]!='\0';len++);

  for(i=0;(i<=len/2)&&(flag==0);i++)
    { if(A[i]==A[len-1-i])
	{ flag=1;
	}
      else
	{ flag=0;
	}
    }

  if(flag==1)
    { printf("It is a palindrome! \n");
    }
  else
    { printf("It is not a palindrome! \n");
    }

}
