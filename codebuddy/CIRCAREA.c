#include <stdio.h>
#include<math.h>
int main(void)
{
double pi;
double area;
long long int radius;
scanf("%lld",&radius);
pi=acos(-1);
area=pi*radius*radius;
printf("%.4f",area);
return 0;
}
