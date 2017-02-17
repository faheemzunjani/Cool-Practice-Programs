#include<stdio.h>
#include<ctype.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,j;
		char s[400],a[80];
		scanf("%s",&s);
		for(i=0,j=0;s[i]!='\0';)
		{
			while(s[i]=='(')
			
			++i;
			if(isalpha(s[i]))
			printf("%c",s[i++]);
			a[j++]=s[i++];
			if(isalpha(s[i]))
			printf("%c",s[i++]);
		
		while(s[i]==')')
		{
		
			printf("%c",a[--j]);
			++i;
	}
			
		}
		printf("\n");
	}
	return 0;
} 