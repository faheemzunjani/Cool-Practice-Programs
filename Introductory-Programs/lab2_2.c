// Program to suggest the suitable data-type for input values
// Faheem Hassan Zunjani

#include<stdio.h>
#include<limits.h>

void main(){

long int a[3];

printf("Enter 3 integers:");
scanf("%ld",&a[0]);
scanf("%ld",&a[1]);
scanf("%ld",&a[2]);

int i=0;

for(i=0;i<3;i++)
  {  if(a[i]>=SCHAR_MIN&&a[i]<=SCHAR_MAX)
      { printf("Signed Char \n");
      }
    else if(a[i]>=0&&a[i]<=UCHAR_MAX)
      { printf("Unsigned Char \n");
      }	
    else if(a[i]>=SHRT_MIN&&a[i]<=SHRT_MAX)
      { printf("Signed Short Int \n");
      }	
    else if(a[i]>=0&&a[i]<=USHRT_MAX)
      { printf("Unsigned Short Int \n");
      }	
    else if(a[i]>=INT_MIN&&a[i]<=INT_MAX)
      { printf("Signed Int \n");
      }
    else if(a[i]>=0&&a[i]<=UINT_MAX)
      { printf("Unsigned Int \n");
      }	
    else if(a[i]>=LONG_MIN&&a[i]<=LONG_MAX)
      { printf("Signed Long Int \n");
      }
    else if(a[i]>=0&&a[i]<=ULONG_MAX)
      { printf("Unsigned Long Int \n");
      }

  }
	
}		






