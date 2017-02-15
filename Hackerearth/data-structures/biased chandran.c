#include <stdio.h>
 
int main()
{
    
    int n,sum=0,i=1,temp;
    scanf("%d",&n);
    int a[n];
    
    while(n--)
    {
        scanf("%d",&temp);
    a[i]=temp;
    
    if(i==1&& temp==0)
    continue;
    
    else if(i>1 && temp==0){
    i=i-1;
    sum=sum-a[i];
    continue;
    }
   else
   {
   i=i+1;
   sum=sum+temp;
   
   }
   }
    
   printf("%d",sum); 
    
    
}