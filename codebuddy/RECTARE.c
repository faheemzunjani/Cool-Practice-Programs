#include <stdio.h>
#include<math.h>
int main(void)
{
long long int x1,x2,y1,y2,temp;
long long int area,dist;
scanf("%lld%lld%lld%lld",&x1,&y1,&x2,&y2);
if(x1>x2)
{
 temp=x1;
 x1=x2;
 x2=temp;
}
if(y1>y2)
{
  temp=y1;
  y1=y2;
  y2=temp;
}
area=(x2-x1)*(y2-y1);
printf("%lld",area);
return 0;
}
