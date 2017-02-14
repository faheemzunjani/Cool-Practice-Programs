#include <stdio.h>


int main() {
int i,cp=0,dig=0;
for(i=111;i<=9999;i++)
{   cp=i;
    dig=i%10;

    while(dig==1||dig==5||dig==7||dig==9&&cp!=0)
    {

       cp=cp/10;

       dig=cp%10;
          }
    if(cp==0)
    printf("%d\n",i);
}
    return 0;
}
