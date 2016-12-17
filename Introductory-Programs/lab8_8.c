//Program to compute tan(x) for given x using recursion
//Faheem Hassan Zunjani
//Wrong output as of now

#include<stdio.h>

float tan_calc(float x){
  if((x>0.0)&&(x<0.001)){
    return x;
  }
  else{
    
    return ((2*tan_calc(x/2))/(1-(tan_calc(x/2)*tan_calc(x/2))));
  }
}


void main(){

  float thet;
 
  printf("Enter angle x: ");
  scanf("%f",&thet);

  printf("tan(%f)= %f \n",thet,tan_calc(thet/2));

}
