#include <stdio.h>

int main(void) {
long long int x,y,z;
scanf("%lld%lld%lld",&x,&y,&z);
if(x>y&&x>z)
printf("%lld",x);
else if(y>z&&y>x)
printf("%lld",y);
else
printf("%lld",z);
return 0;
}
