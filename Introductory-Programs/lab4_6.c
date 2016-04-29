//Program to find sin(x) and cos(x) till 4 decimal places.
// Faheem Hasan Zunjani

#include<stdio.h>
#include<math.h>

void main(){

  float x=0.0,sinTerm=1.0,cosTerm=1.0,fac=1.0,sinSum=0.0,cosSum=0.0;
  int p=0,q=0,i,j,k,l;

  printf("This program finds sin(x) and cos(x) using series expansion! \n");
  printf("Enter x: ");
  scanf("%f",&x);

  for(i=1;sinTerm>0.0001;i+=2,p++)
    { for(j=i;j>=1;j--)
	{ fac=fac*j;
	}
      sinTerm=(pow((-1),p)*pow(x,i))/fac;
      sinSum=sinSum+sinTerm;
      fac=1.0;
    }

  for(k=0;cosTerm>0.0001;k+=2,q++)
    { for(l=k;l>=1;l--)
	{ fac=fac*l;
	}
      cosTerm=(pow((-1),q)*pow(x,k))/fac;
      cosSum=cosSum+cosTerm;
      fac=1.0;
    }

  printf("Sin(%f)= %f \n",x,sinSum);
  printf("Cos(%f)= %f \n",x,cosSum);

}
  
  
