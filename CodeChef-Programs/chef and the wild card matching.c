#include<stdio.h>
char s1[100];
char s2[100];
int main()
{
 
int t,l,i,flag;
scanf("%d",&t);
while(t--)
{
scanf("%s",s1);
scanf("%s",s2);
l=strlen(s1); flag=0;
for(i=0;i<l;i++)
{
if(s1[i]!='?' && s2[i]!='?')
{
if(s1[i]!=s2[i])
{
flag=1;
break;
}
}
}
 
if(flag==0)
    printf("Yes\n");
else
    printf("No\n");
}
 
 
return 0;
}