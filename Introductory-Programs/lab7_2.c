// Program to print all possible combinations of given characters
// Faheem Hassan Zunjani

#include<stdio.h>

void main(){
  char str[1000],tstr[1000];
  int len;

  int i,j,f,g,h,k,l;

  printf("Enter string: ");
  gets(str);

  for(len=1;str[len]!='\0';len++);

  for(i=0;i<len+1;i++){
    tstr[i]=str[i];
  }

  f=0;
  g=1;

  printf("All possible combinations of %s are: \n",str);

  for(;f<len;f++){
    g=f+1;
    
    do{
      if(g!=len){
	l=g;
	k=g+1;
	h=k;
	printf("%c%c",tstr[f],tstr[g]);
	do{
	  if((k==f)||(k==g)){
	    k++;
	  }
	  else if((k!=len)){
	    printf("%c",tstr[k]);
	    k++;
	  }
	  else{
	    k=0;
	  }
	  
	}while(k!=h);
	
	g++;
	printf("\n");
      }
      else {
	break;
      }

      }while(g!=l);
      
    printf("\n");
  }

}
