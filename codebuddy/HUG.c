#include <stdio.h>
#include<math.h>
int main(void)
{
long int t,i,min,n,h,k,hi[1000],diff;
scanf("%ld",&t);
for(i=0;i<t;i++)
{  min=10000;
    scanf("%ld%ld",&n,&h);
    for(k=0;k<n;k++)
    {
        scanf("%d",&hi[k]);
        diff=abs(hi[k]-h);
        if(diff<min)
        min=diff;
    }

    printf("%ld\n",min);
}


	return 0;
}
