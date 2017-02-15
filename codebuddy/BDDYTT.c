#include <stdio.h>
#include<string.h>
int main(void) {
int t,i,j,l,pointsa=0,pointsb=0;
char string[100];
scanf("%d",&t);
for(i=0;i<t;i++)
  {   pointsa=0,pointsb=0;
      scanf("%s",string);
      l=strlen(string);
      for(j=0;j<l;j++)
       {
           if(string[j]=='1')
           {
               pointsa+=2;
           }
           else
           pointsb+=2;
       }
       if(pointsa>pointsb)
       printf("WIN\n");
       else
       printf("LOSE\n");
  }
	return 0;
}
