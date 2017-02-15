#include<stdio.h>
#include<math.h>
#include<string.h>
main()
{
   long long unsigned int t,i,m,n;
 scanf("%llu",&t);
 for(i=1;i<=t;i++)
 {
     scanf("%llu %llu",&n,&m);
     printf("%llu\n",m+n-2+(2*(m-1)*(n-1)));
 }
    return 0;
}
 