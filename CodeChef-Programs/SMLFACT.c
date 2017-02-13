#include <stdio.h>

void factorial(int number)
{
    int fact[200] = {0};
    int tempnum = 1;
    int index = 0;
    int carry = 0;
    int j = 0;

    fact[0] = 1;

    while(tempnum<=number)
    {   
        j = 0;
        for (; j <=index; ++j)
        {
            fact[j] = fact[j]*tempnum + carry;
            carry = fact[j] / 10;
            fact[j] = fact[j] % 10;
        }
        
        while(carry)
        {   
            index++;
            fact[index] = carry % 10;
            carry = carry/10;
            
        }
        tempnum++;
    }
    for (int i = index; i >= 0; --i)
    {
        printf("%d",fact[i]);
    }
    printf("\n");

}

int main(int argc, char const *argv[])
{
    int iterations;
    int number;

    scanf("%d",&iterations);

    for (int i = 0; i < iterations; ++i)
    {   
        scanf("%d",&number);
        factorial(number); 
    }
    return 0;
}
