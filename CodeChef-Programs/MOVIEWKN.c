#include<stdio.h>
int main()
{
    int t,n,l[101],r[101];
    int c,max1,max,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&l[i]);
        }
        for(i=1;i<=n;i++)
        {
            scanf("%d",&r[i]);
        }
        c=1;
        max1=l[1]*r[1];
        for(i=2;i<=n;i++)
        {
            max=l[i]*r[i];
            if(max>max1)
            {
                c=i;
                max1=max;
            }
            else if (max==max1)
            {
                if(r[c]<r[i])
                {
                    c=i;
                }
            }
        }
        printf("%d\n",c);
    }
    return 0;
} 