 #include <stdio.h>

    int main()
    {
        int j,i,n,arr[1000][1000],area=0,x1,x2,y1,y2;

        for(i=0;i<1000;i++)
            for(j=0;j<1000;j++)
                 arr[i][j]=0;

        scanf("%d",&n);

        while(n--)
        {
            scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

            for(i=x1;i<x2;i++)
                for(j=y1;j<y2;j++)
                    if(arr[i][j]==0) {  arr[i][j]=1; ++area; }
        }

        printf("%d",area);
        return 0;
    }
