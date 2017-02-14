#include <stdio.h>

int main(void)
{
int c,flag,n,i,j,k,r,l,t;
scanf("%d",&t);
for(i=0;i<t;i++)
{ c=0;
    scanf("%d%d",&l,&r);
    for(k=l;k<=r;k++)
    { flag=0;
        for(j=2;j<k;j++)
        {
            if(k%j==0)
            flag=-1;
        }
        if(flag!=-1&&k!=1)
        c++;
    }
    printf("%d\n",c);
}
