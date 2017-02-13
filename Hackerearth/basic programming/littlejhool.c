#include <stdio.h>
#include<string.h>
int main()
{
	int l,i,j,n,zero,one;
	char a[110];
	scanf("%s",a);
	l = strlen(a);
	for(i=0;i<l;i++)
	{
		zero = 0;
		for(j=0;j<6 && a[i+j] == '0';j++)
		{
			zero++;
			if(zero>=6)
			{
				printf("Sorry, sorry!");
				exit(0);
			}
		}
		one = 0;
		for(j=0;j<6 && a[i+j] == '1';j++)
		{
			one++;
			if(one>=6)
			{
				printf("Sorry, sorry!");
				exit(0);
			}
		}
	}
	printf("Good luck!");


	return 0;
}
