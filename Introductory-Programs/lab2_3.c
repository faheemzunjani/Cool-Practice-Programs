// Program to find roots of quadratic equation ax^2+bx+c=0
// Faheem Hassan Zunjani

#include<stdio.h>
#include<math.h>

void main(){

int a,b,c;
float D,root1,root2;

printf("Enter coefficients a,b,c:");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

D=pow(((b*b)-(2*(a*c))),(0.5));

if(D>0)
{ 
  printf("Roots are real and distinct! \n");
  root1=(((-1)*b)+D)/(2*a);
  root2=(((-1)*b)-D)/(2*a);
  printf("Root1= %f \n",root1);
  printf("Root2= %f \n",root2);
}
else if(D==0)
{ printf("Roots are real and coincident! \n");
  root1=(((-1)*b)+D)/(2*a);
  printf("Root= %f \n",root1);
}
else 
{ float tD=pow(((-1)*D),0.5);
  printf("Roots are imaginary and distinct! \n");
  root1=(((-1)*b))/(2*a);
  root2=(((-1)*b))/(2*a);
  
  printf("Root1= %f + %f i\n",root1,(tD/(2*a)));
  printf("Root2= %f - %f i\n",root2,(tD/(2*a)));
}

}
