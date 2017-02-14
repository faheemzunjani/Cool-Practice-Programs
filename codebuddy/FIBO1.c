#include <stdio.h>

int main(void) {
unsigned long long int t,i,n,first,second,third;
scanf("%llu",&t);
while(t--)
{
    scanf("%llu",&n);
    first=1;
    second=1;
    third=0;
    if(n==1||n==2)
    {
        third=1;
    }
    for(i=3;i<=n;i++)
     {
         third=(first+second)%1000000007;
         first=second;
         second=third;
     }
     printf("%llu\n",third);

}

	return 0;
}
