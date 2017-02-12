#include<stdio.h>
int main()
{
      int t,berth;
      scanf("%d",&t);
      while(t--)
      {
            scanf("%d",&berth);
            switch(berth%8)
            {
                  case 0:printf("%dSL\n",berth-1); break;
                  case 1:printf("%dLB\n",berth+3); break;
                  case 2:printf("%dMB\n",berth+3); break;
                  case 3:printf("%dUB\n",berth+3); break;
                  case 4:printf("%dLB\n",berth-3); break;
                  case 5:printf("%dMB\n",berth-3); break;
                  case 6:printf("%dUB\n",berth-3); break;
                  case 7:printf("%dSU\n",berth+1); break;
            }
      }
      return 0;
}
 