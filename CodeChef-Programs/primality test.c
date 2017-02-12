#include<stdio.h>
int main()
{
 
    int T,N,i,j;
 
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        if(N==1)
            printf("NO\n");
        else
        {
            for(j=2;j<N;j++)
            {
                if(N%j==0)
                { 
                 printf("no\n");
                 break;
                 
                }
 
            }
            if(j==N)
            printf("yes\n");
        }
    }
    return 0;
} 