#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char str1[1001],str2[1001],str3[1001];
 
int main(){
  int T,N,f,l,o,i;
  scanf("%d",&T);
  while(T--){
    scanf("%s%s%s%d",str1,str2,str3,&N);
    l=strlen(str3);
    for(i=l-1,f=0;i>=0;i--){
      if(str3[i]=='0'){
        f=1;
        str3[i]='1';
        break;
      }
      else
        str3[i]='0';
    }
    l=strlen(str2);
    for(i=l-1,o=0;!f && i>=0;i--){
      if(str2[i]=='0'){
        f=1;
        o--;
        break;
      }
      else
        o++;
    }
    if(!f)
      o*=N;
    l=strlen(str1);
    for(i=l-1;!f && i>=0;i--){
      if(str1[i]=='0'){
        f=1;
        str1[i]='1';
        break;
      }
      else
        str1[i]='0';
    }
    if(!f)
      printf("1\n");
    else{
      for(i=l=0;str2[i];i++)
        if(str2[i]=='1')
          l++;
      l*=N;
      for(i=0;str1[i];i++)
        if(str1[i]=='1')
          l++;
      for(i=0;str3[i];i++)
        if(str3[i]=='1')
          l++;
      printf("%d\n",l-o);
    }
  }
  return 0;
} 