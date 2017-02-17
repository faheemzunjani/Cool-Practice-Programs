#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        float b,ls;
        scanf("%f %f",&b,&ls);
        float res1,res2;
        res1=sqrt(ls*ls-b*b);
        res2=sqrt(ls*ls+b*b);
        printf("%0.6f %0.6f\n",res1,res2);
    }
    return 0;
} 