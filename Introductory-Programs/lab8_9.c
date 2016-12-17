//Program to print the value of (R,C) element in Pascal's Triangle
//Faheem Hassan Zunjani

#include<stdio.h>

int pascal_tri(int r,int c){
  
  if((c==1)||(r==c)){
    return 1;
  }
  else{
    return pascal_tri((r-1),(c-1))+pascal_tri((r-1),c);
  }
}

void main(){
  int R,C;

  scanf("%d %d",&R,&C);

  printf("%d\n",pascal_tri(R,C));

}
