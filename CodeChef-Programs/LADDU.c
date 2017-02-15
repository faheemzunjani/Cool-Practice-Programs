
#include<stdio.h>
 
int main()
{
  char act[20],origin[20];
  int na,n,i,sum,t;
  scanf("%d",&t);
  while(t--)
  {
      sum=0;
      scanf("%d %s",&na,&origin);
      for(i=0;i<na;i++)
      {
          scanf("%s",&act);
          if(strcmp(act,"CONTEST_WON")==0)
          {
              scanf("%d",&n);
              if(n>20)
               n=20;
              sum+=300+20-n;
            }
          else if(strcmp(act,"TOP_CONTRIBUTOR")==0)
             sum+=300;
          else if(strcmp(act,"BUG_FOUND")==0)
          {
              scanf("%d",&n);
              sum+=n;
          }
          else if(strcmp(act,"CONTEST_HOSTED")==0)
            sum+=50;
      }
      if(strcmp(origin,"INDIAN")==0)
        sum=sum/200;
      else
        sum=sum/400;
      printf("%d\n",sum);
  }
  return 0;
}