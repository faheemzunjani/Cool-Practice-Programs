#include <stdio.h>

int main(void)
{
long long int i,n,t,cp,rev=0,dig;
scanf("%lld",&t);
for(i=0;i<t;i++)
{   rev=0;
    scanf("%lld",&n);
    cp=n;
    while(cp!=0)
    {
        dig=cp%10;
        rev=rev*10+dig;
        cp=cp/10;
    }
    if(n==rev)
    {
        printf("Yes\n");
    }
    else
    printf("No\n");

}

	return 0;
}
