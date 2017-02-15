#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	char x[100000];
	while(t>0)
	{
		scanf("%s",x);
		int len=strlen(x);
		char y[len];
		scanf("%s",y);
		int i=0;
		while(x[i]!='\0')
		{
			if(x[i]=='W' && y[i]=='W')
				printf("B");
			else if(x[i]=='B' && y[i]=='B')
				printf("W");
			else
				printf("B");
			i++;
		}
		printf("\n");
		t--;
	}
	return 0;
}
 