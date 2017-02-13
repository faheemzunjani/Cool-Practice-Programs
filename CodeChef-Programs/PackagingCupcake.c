#include <stdio.h>

int main()
{
    int iterations = 0;
    int cupcakes = 0;
    scanf("%d",&iterations);

    for (int i = 0; i < iterations; ++i)
    {
        scanf("%d",&cupcakes);
        printf("%d\n",cupcakes/2+1);
    }
    return 0;
}
