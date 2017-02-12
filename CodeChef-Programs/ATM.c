#include <stdio.h>

int main(int argc, char const *argv[])
{
    int withdrawl = 0;
    float balance = 0.0;
    
    scanf("%d",&withdrawl);
    scanf("%f",&balance);
    
    if (withdrawl%5==0 && balance > (withdrawl+0.5))
    {
        printf("%.2f\n",(balance-(withdrawl+0.5)));
    }
    else
    {
        printf("%.2f\n",balance);
    }
    return 0;
}
