#include<stdio.h>
 
int main()
 
{
 
    int t;  scanf("%d",&t);
 
    while(t--)
 
    {
 
        int n,m;  scanf("%d %d",&n,&m);
 
        char s[n][m+1];
 
        int b,c,a=0,i,j;
 
        for(i=0;i<n;i++)
 
        {
 
          scanf("%s",&s[i]);
 
        }
 
 
 
      for(i=0;i<m;i++)
 
        {
 
            b=0;
 
 
 
            for(j=0;j<n;j++)
 
            {
 
 
 
                if(s[j][i]=='1')
 
                b++;
 
            }
 
            if(b>1)
 
            {
 
            c=b*(b-1)/2;
 
            a=a+c;
 
            }
 
        }
 
        printf("%d\n",a);
 
    }
 
    return 0;
 
}
 
 
 