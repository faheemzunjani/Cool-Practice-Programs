// Program to write string functions
// Faheem Hassan Zunjani

#include<stdio.h>

int str_len(char *str){
  int len=0;
  
  for(len=0;*str!='\0';len++);
  
  return len;
}

char* str_cat(char *str1, char* str2){
  char *p=str1;
  char *q=str2;
  char *resStr=str1;

  for(;*p!='\0';p++);
  
  for(;*q!='\0';q++,p++){
    *p=*q;
  }
  *p='\0';

  return resStr;
}

int str_cmp(char* str1, char* str2){
  char *p=str1;
  char *q=str2;

  for(;(*p!='\0')&&(*q!='\0');p++,q++){
    if(*p==*q){
      continue;
    }
    else{
      break;
    }
  }
  
  if(*p==*q){
    return 0;
  }
  else if((*p>*q)||((*p!='\0')&&(*q=='\0'))){
    return 1;
  }
  else{
    return -1;
  }
}

char* str_cpy(char *str1, char *str2){
  char *p=str1;
  char *q=str2;

  for(;p!='\0';p++,q++){
    *q=*p;
  }
  *q='\0';
  
  return str2;
}
    
/*
int main(){
  char *str1,*str2;
  int ch;

  printf("    Menu:\n");
  printf("1. Length of a string\n");
  printf("2. Concatenate two strings\n");
  printf("3. Compare two strings\n");
  printf("4. Copy a string into another\n");
  printf("Enter choice: ");
  scanf("%d",&ch);

  switch(ch){
  case 1: str_len();
    break;
  case 2: str_cat();
    break;
  case 3: str_cmp();
    break;
  case 4: str_cpy();
    break;
  default: printf("Wrong choice!\n");
    break;
  }

  return 0;
}
*/
