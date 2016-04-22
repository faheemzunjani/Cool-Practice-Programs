// Program to print result as per given conditions
// Faheem Hassan Zunjani

#include<stdio.h>

void main(){

  int a,b,c,ch1,ch2;

  printf("Enter 3 no.s a,b,c:");
  scanf("%d,%d,%d",&a,&b,&c);

  printf("The 3 no.s are %d,%d,%d !",a,b,c);
  printf("Choose any two no.s from the above three! \n");
  printf("Enter first choice:");
  scanf("%d",&ch1);
  printf("Enter second choice:");
  scanf("%d",&ch2);

  if((ch1!=a&&ch1!=b&&ch1!=c)||(ch2!=a&&ch2!=b&&ch2!=c))
    { printf("Wrong entry! Enter choices among the 3 no.s!");
      printf("Enter first choice:");
      scanf("%d",&ch1);
      printf("Enter second choice:");
      scanf("%d",&ch2);
    }
  else if(ch1==ch2&&(ch1==a||ch1==b||ch1==c))
    { printf("tie!");
    }
  else if(ch1==a&&ch2==b)
    { printf("b win!");
    }
  else if(ch1==b&&ch2==c)
    { printf("b win!");
    }
  else if(ch1==a&&ch2==c)
    { printf("c win!");
    }
  else if(ch1==b&&ch2==a)
    { printf("a win!");
    }
  else if(ch1==c&&ch2==a)
    { printf("a win!");
    }
  else if(ch1==c&&ch2==b)
    { printf("c win!");
    }

}




