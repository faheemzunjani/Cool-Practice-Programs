// Program to find the size of data-types
//Faheem Hassan Zunjani
 
#include<stdio.h>

void main(){
  // sizeof() function returns the size of the datatype
  // supplied in the function argument. 
  // char ch; sizeof(ch) is valid.
  // sizeof(char) is also valid.
  
  printf("Size of all data-types in bytes are: \n");
  
  printf("Integer: %ld \n",sizeof(int));

  printf("Float: %ld \n",sizeof(float));

  printf("Char: %ld \n",sizeof(char));

  printf("Double: %ld \n",sizeof(double));
}
