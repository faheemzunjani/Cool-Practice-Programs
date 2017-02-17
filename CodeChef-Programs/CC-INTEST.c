#include <stdio.h>
#define size 80000
int main (void)
{
unsigned long n,k,t;
char buff[size];
unsigned long count=0;
unsigned long divisible=0;
int block_read=0;
int is_first=0;
int j;
t=0;
scanf("%lu %lu",&n,&k);
scanf("\n");
while(count<n){
block_read =fread(buff,1,size,stdin);
for(j=0;j<block_read;j++){
if(buff[j]=='\n'){
count++;
if(t%k==0){
divisible++;
}
t=0;
}
else{
t = t*10 + (buff[j] - '0');
}
}
}
printf("%lu",divisible);
return 0;
} 