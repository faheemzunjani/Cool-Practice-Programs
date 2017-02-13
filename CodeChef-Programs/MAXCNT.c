#include <stdio.h>

int main()
{
    int iterations = 0;
    scanf("%d",&iterations);

    int max = 0;
    int num = 0;
    int size = 0;

    for (int i = 0; i < iterations; ++i)
    {   
        max = 0;

        scanf("%d",&size);
        int count[10001] = {0};

        for (int j = 0; j < size; ++j)
        {
            scanf("%d",&num);
            count[num]+=1;

            if (count[num]>max)
            {
                max = count[num];
            }
        }

        for (int k = 0; k < 10001; ++k)
        {
            if (count[k]==max)
            {
                printf("%d %d\n",k,max);
                break;
            }
        }


    }
    return 0;
}
