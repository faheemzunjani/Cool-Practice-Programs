// Program to check the presence of a hidden substring
// Faheem Hassan Zunjani

#include<stdio.h>

int main(){
  char str[1000], substr[1000], resString[1000]={'\0'};
  int flag=0;
  
  scanf("%s %s",str,substr);
  char *string=str;
  char *substring=substr;
  char *resStr=resString;
  
  while(*string!='\0'){
    if(*string==*substring){
      substring++;
      flag=1;
      *resStr=*string;
    }
    else{
      *resStr='-';
    }
    string++;
    resStr++;
  }
  
  *resStr='\0';
  
  if(flag==1){
    printf("%s\n",resString);
  }
  else{
    printf("Not a hidden substring\n");
  }

  return 0;
}
