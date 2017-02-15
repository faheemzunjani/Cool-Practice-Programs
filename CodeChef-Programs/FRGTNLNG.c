#include<stdio.h>
#include<string.h>
int main()
{
    int t, i, j, k, m,r, l, n, z, p, ans;
    int len[200], lenp[3000];
    char str[200][10], phr[3000][10];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&n,&k);
        for(j=0;j<n;j++)
        {
            scanf("%s",str[j]);
            len[j]=strlen(str[j]);
        }
        m=0;
        for(j=0;j<k;j++)
        {
            scanf("%d",&l);
            for(r=0;r<l;r++)
            {
                scanf("%s",phr[m]);
                lenp[m]=strlen(phr[m]);
                m++;
            }
        }
        p=m;
        ans=0;
        for(j=0;j<n;j++)
        {
            for(m=0;m<p;m++)
            {
                if(len[j]==lenp[m])
                {
                    for(z=0;str[j][z]!='\0';z++)
                    {
                        if(str[j][z]!=phr[m][z])
                        {
                            break;
                        }
                    }
                    if(z==len[j])
                    {
                        ans=1;
                        break;
                    }
                }
            }
            if(ans==1)
            {
                printf("YES ");
            }
            else
            {
                printf("NO ");
            }
            ans=0;
        }
        printf("\n");
    }
    return 0;
} 