#include <stdio.h>

int main(void)
{
int flag=0;
long int t,n,k,i,a[1000];
scanf("%ld",&t);
for(k=0;k<t;k++)
{   flag=0;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]!=a[n-i-1])
        flag=-1;
    }
    if(flag!=-1)
    printf("Yes\n");
    else
    printf("No\n");
}

	return 0;
}
