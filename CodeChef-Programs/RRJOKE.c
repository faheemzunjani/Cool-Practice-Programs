#include <stdio.h>
 
int main()
{
int t,n,x,y,i,dis;
 
scanf("%d",&t);
while (t--){
scanf("%d",&n);
dis= 0;
for(i=1; i<=n; i++ ){
scanf("%d %d",&x,&y);
dis = dis^i;
}
printf("%d\n",dis);
}
return 0;
}
 