#include<stdio.h>
int main()
{
int t;
 int a,b,c,d,i;
 long long int cnt;
scanf("%d",&t);
while(t--)
{
cnt=0;
scanf("%d %d %d %d",&a,&b,&c,&d);
for(i=a;i<=b;i++)
{
if(i<c)
{
cnt=cnt+d-c+1;
}
else if(i<d)
{
cnt=cnt+d-i;
}
else
{
break;
}
}
printf("%lld\n",cnt);
}
return 0;
}