
// Program to check for the presence of a substring
// Faheem Hassan Zunjani

#include<stdio.h>

int substring(char* s,char* t){
  int pos,i=0;
  char *p=s;
  char *q=t;

  while(*p!='\0'){
    if(*p==*q){
      pos=i;
      while((*p==*q)&&(*q!='\0')&&(*p!='\0')){
	p++;
	i++;
	q++;
	printf("%c\n%c",*p,*q);
      }
      if(*q=='\0'){
	break;
      }
      else{
	p++;
	q=t;
      }
    }
    else{
      i++;
      p++;
    }
  }

  if(*q=='\0'){
    return pos;
  }
  else{
    return -1;
  }
}

int main(){
  char *str,*substr;
  int result;

  printf("Enter string: ");
  scanf("%s",str);
  printf("Enter substring: ");
  scanf("%s",substr);

  result=substring(str,substr);

  if(result==-1){
    printf("Not a substring\n");
  }
  else{
    printf("%d\n",result);
  }
 
  return 0;
}

    
