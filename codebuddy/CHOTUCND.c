#include <stdio.h>

int main(void)
{
unsigned long long int i,n,t,s=0,s2=0;
scanf("%llu",&n);
for(i=0;i<n;i++)
  {
   scanf("%llu",&t);
   s+=t;
   s2+=(i+1);
  }

if(s==s2)
printf("YES\n");
else
printf("NO\n");
	return 0;
}
