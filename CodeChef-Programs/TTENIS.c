#include<stdio.h>
#include<string.h>
int main()
{
	int t,i;
	char a[100];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		int len=strlen(a);
		int count1=0;
		for(i=0;i<len;i++)
		{
			if(a[i]=='1') count1++;
		}
		
		if(len<=20)
			if(count1==11) printf("WIN\n");
			else printf("LOSE\n");
			
		else
		{
			if(count1==(len+2)/2)printf("WIN\n");
			else printf("LOSE\n");
		}
	}
	return 0;
}