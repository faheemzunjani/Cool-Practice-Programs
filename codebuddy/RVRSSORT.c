#include <stdio.h>

int main(void)
{
long long int i,j,n,a[1000],temp;
scanf("%lld",&n);
for(i=0;i<n;i++)
{
    scanf("%lld",&a[i]);
}
for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]<a[j])
        {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
}
for(i=0;i<n;i++)
{
    if(a[i]!=a[i+1])
    {
       printf("%lld ",a[i]);
    }


}


	return 0;
}
