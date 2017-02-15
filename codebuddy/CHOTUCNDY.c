#include <stdio.h>
#include<math.h>
int main()
{
    int t,n,c,j,i,a[1000],min,value;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        scanf("%d",&c);
        for(j=0;j<n;j++)
        {
             scanf("%d",&a[j]);
        }
        min=abs(a[0]-c);
        for(j=1;j<n;j++)
        {
            value=abs(a[j]-c);
               if(value<min)
               {
                   min=value;
               }
        }
        printf("%d\n",min);
    }

}
