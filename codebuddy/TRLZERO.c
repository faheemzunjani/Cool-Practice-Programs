#include <stdio.h>

int main(void)
{
long long int i,t,divi,quo,no,n;
scanf("%lld",&t);
for(i=0;i<t;i++)
    {   divi=5;
        no=0;
        scanf("%lld",&n);
        do
        {
            quo=n/divi;
            no+=quo;
            divi=divi*5;
        }while(quo>=1);
        printf("%lld\n",no);
    }
return 0;
}
