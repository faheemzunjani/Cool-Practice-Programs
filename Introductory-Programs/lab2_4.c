// Program to implement the functions of a calculator
// Faheem Hassan Zunjani

#include<stdio.h>

void main(){

char ch;
float a,b;

printf("Menu: \n");
printf("1. + for Sum \n");
printf("2. - for Difference \n");
printf("3. * for Multiplication \n");
printf("4. / for Division \n");

printf("Enter choice:");
scanf("%c",&ch);

printf("Enter two no.s A,B: ");
scanf("%f,%f",&a,&b);

switch(ch)
{ case '+': printf("\n Sum is: %f",(a+b));
            break;   
  case '-': printf("\n Difference is: %f",(a-b));
            break;     
  case '*': printf("\n Product is: %f",(a*b));
            break;  
  case '/': printf("\n Quotient is: %f",(a/b));
            break;
}

}
