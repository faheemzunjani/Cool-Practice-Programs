#include<stdio.h>
#include<string.h>
int main()
{
int i,t,j,q;
char ar[100000];
scanf("%d",&t);
for(i=0;i<t;i++)	
{
scanf("%s",&ar);
q=0;
	for(j=0;ar[j]!='\0';j++)
	{
	if(ar[j]=='<' && ar[j+1]=='>')
	q++;
	}
printf("%d\n",q);
}
return 0;
}